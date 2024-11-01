#include <stdlib.h>

typedef struct LLNode {
  struct LLNode* prev;
  struct LLNode* next;
  char* data;
} LLNode;

LLNode* list_insert(LLNode* node, char* stack_data);
LLNode* list_find(LLNode* node, char* data);
int list_delete(LLNode* node);
int list_delete_all(LLNode* node);
size_t list_length(LLNode* node);
void list_print(LLNode* node);
