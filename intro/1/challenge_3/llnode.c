#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "llnode.h"

// Only supports appending (whoops)
LLNode* list_insert(LLNode* node, char* stack_data){
  char* data = strdup(stack_data);
  strcpy(data, stack_data);
  
  if (!node){
    LLNode* new_node = (LLNode*)(malloc(sizeof(LLNode)));
    new_node->prev = 0;
    new_node->next = 0;
    new_node->data = data;
    return new_node;
  }
  LLNode* n = node;
  LLNode* prev = n->prev;
  while (n) {
    prev = n;
    n = n->next;
  }
  LLNode* new_node = (LLNode*)(malloc(sizeof(LLNode)));
  new_node->prev = prev;
  prev->next = new_node;
  new_node->data = data;
  return new_node;
}

LLNode* list_find(LLNode* node, char* data){
  LLNode* n = node;
  while (n){
    if (!strcmp(n->data, data)){
      return n;
    }
    n = n->next;
  }
  return NULL;
}

int list_delete(LLNode* node){
  if (!node) {
    return 0;
  }
  if (node->prev){
    node->prev->next = node->next;
  }
  if (node->next){
    node->next->prev = node->prev;
  }
  free(node->data);
  free(node);
  return 1;
}

int list_delete_all(LLNode* node){
  if (!node) {
    return 0;
  }
  LLNode* next = node->next;
  LLNode* n = node;
  while (n){
    next = n->next;
    free(n->data);
    free(n);
    n = next;
  }
  return 1;
}

size_t list_length(LLNode* node){
  size_t len = 0;
  LLNode* n = node;
  while (n) {
    len++;
    n = n->next;
  }
  return len;
}

void list_print(LLNode* node){
  if (!node){
    return;
  }
  LLNode* n = node;
  while (n) {
    printf("%s\n", n->data);
    n = n->next;    
  }
}
