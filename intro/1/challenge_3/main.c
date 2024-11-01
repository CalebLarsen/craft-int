#include <stdio.h>
#include <stdlib.h>

#include "llnode.h"

void test_insert_1(){
  LLNode* root = list_insert(NULL, "Hello,");
  list_insert(root, "world");
  list_insert(root, "!");
  if (list_length(root) != 3){
    printf("Test Insert 1: Expected list length 3, got %zu\n", list_length(root));
    exit(1);
  }
  list_delete_all(root);
}

void test_find_1(){
  LLNode* root = list_insert(NULL, "Hello,");
  list_insert(root, "world");
  list_insert(root, "!");
  LLNode* node = list_find(root, "world");
  if (!node){
    printf("Test Find 1: Unable to find node\n");
    exit(1);
  }
  if (list_length(node) != 2){
    printf("Test Find 1: Expected list length 2, got %zu\n", list_length(root));
    exit(1);
  }
  list_delete_all(root);
}

void test_find_2(){
  LLNode* root = list_insert(NULL, "Hello,");
  list_insert(root, "world");
  list_insert(root, "!");
  LLNode* node = list_find(root, "worl");
  if (node){
    printf("Test Find 2: Found fake node\n");
    exit(1);
  }
  if (list_length(root) != 3){
    printf("Test Find 2: Expected list length 3, got %zu\n", list_length(root));
    exit(1);
  }
  list_delete_all(root);
}

void test_delete_1(){
  LLNode* root = list_insert(NULL, "Hello,");
  list_insert(root, "world");
  list_insert(root, "!");
  if (!list_delete(list_find(root, "world"))){
    printf("Test Delete 1: Delete failed\n");
    exit(1);
  }
  if (list_length(root) != 2){
    printf("Test Delete 1: Expected list length 2, got %zu\n", list_length(root));
    exit(1);
  }
  if (list_find(root, "world")) {
    printf("Test Delete 1: Found deleted node\n");
    exit(1);
  }
  list_delete_all(root);
}

void test_delete_2(){
  LLNode* root = list_insert(NULL, "Hello,");
  list_insert(root, "world");
  list_insert(root, "!");
  if (list_delete(list_find(root, "worl"))){
    printf("Test Delete 2: Bad delete succeeded\n");
    exit(1);
  }
  if (list_length(root) != 3){
    printf("Test Delete 2: Expected list length 3, got %zu\n", list_length(root));
    exit(1);
  }
  list_delete_all(root);
}

int main(){
  test_insert_1();
  test_find_1();
  test_find_2();
  test_delete_1();
  test_delete_2();
  printf("Passed Tests :)\n");
}
