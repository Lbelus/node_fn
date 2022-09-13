#include "node_header.h"

int node_top(node_t* head) {
  int max = head->value;

  while(head != NULL){
    if(max < head->value){
        max = head->value;
    }
    head = head->next;
  }
  return max; 
}