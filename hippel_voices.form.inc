<?php
/**
  * Implementation of hook_form_alter.
  */
function hippel_voices_form_alter(&$form, $form_state, $form_id) {
  switch ($form_id) {
    case 'comment_node_form':
      $form['#after_build'][] = 'hippel_voices_after_build';
      break;
    case 'question_node_form':
      $form['#after_build'][] = 'hippel_voices_after_build';
      break;
    case 'suggestion_node_form':
      $form['#after_build'][] = 'hippel_voices_after_build';
      break;
    case 'image_node_form':
      $form['#after_build'][] = 'hippel_voices_after_build';
      break;
    case 'link_node_form':
      $form['#after_build'][] = 'hippel_voices_after_build';
      break;
  }
}

/**
* Document this.
*/
function hippel_voices_after_build($form, &$form_state) {
   switch ($form['form_id']['#value']) {
     case 'comment_node_form':
       $node = menu_get_object();
       if (empty($node->field_idea_reference)) {
       $form['field_idea_reference']['nid']['nid']['#value'] = $node->nid;
       } 
       $form['field_idea_reference']['#access'] = FALSE;
       $form['revision_information']['#access'] = FALSE;
       unset($form['buttons']['preview']);
       break;
     case 'question_node_form':
       $node = menu_get_object();
       if (empty($node->field_idea_reference)) {
       $form['field_idea_reference']['nid']['nid']['#value'] = $node->nid;
       } 
       $form['field_idea_reference']['#access'] = FALSE;
       $form['revision_information']['#access'] = FALSE;
       unset($form['buttons']['preview']);
       break;
     case 'suggestion_node_form':
       $node = menu_get_object();
       if (empty($node->field_idea_reference)) {
         $form['field_idea_reference']['nid']['nid']['#value'] = $node->nid;
       } 
       $form['field_idea_reference']['#access'] = FALSE;
       $form['revision_information']['#access'] = FALSE;
       unset($form['buttons']['preview']);
       break;
     case 'image_node_form':
       $node = menu_get_object();
       if (empty($node->field_idea_reference)) {
         $form['field_idea_reference']['nid']['nid']['#value'] = $node->nid;
       } 
       $form['field_idea_reference']['#access'] = FALSE;
       $form['revision_information']['#access'] = FALSE;
       unset($form['buttons']['preview']);
       break;
     case 'link_node_form':
       $node = menu_get_object();
       if (empty($node->field_idea_reference)) {
         $form['field_idea_reference']['nid']['nid']['#value'] = $node->nid;
       } 
       $form['field_idea_reference']['#access'] = FALSE;
       $form['revision_information']['#access'] = FALSE;
       unset($form['buttons']['preview']);
       break;
  }
  return $form;
}
