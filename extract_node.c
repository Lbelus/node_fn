#include "node_header.h"

int node_count(node_t *head) {
    int count = 0;
    node_t *tmp = head;

    while(tmp != NULL ){
        tmp = tmp->next;
        count++;
    }
    
    return count;
}


int recur_node_count(node_t *head, int count) {

    if(head == NULL){
        return count;
    }
    count++;
    return recur_node_count(head->next, count); 
} 

node_t *split_node_on_pos(node_t *head, int pos) {  
    int index = 0;
    
    if(head == NULL){return NULL;}
    
    while(index < pos){
        head = head->next;
        index++;
    }

    node_t *tmp = head->next;
    head->next = NULL;

    return tmp;
}