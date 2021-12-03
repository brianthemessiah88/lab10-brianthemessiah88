#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  Node* next_node = head->next; 
  if (head == NULL){
    return 0;
  if (next_node ==NULL){
    return head->data;
  else{
    next_node += head->data;
    return recursiveSum(next_node)+head->data;
  }
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  Node* next_item;
  next_item = head->next;
  if (next_item==NULL){
    return head->data;
  }
  else{
    next_item = head->next;
    if (next_item>head)
  return -42;
}
