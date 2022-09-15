#include "node_header.h"


node_t *go_to_node(node_t *head, int pos) {
    node_t *tmp = head;
    int index = 0;
    
    while(index < pos){
        tmp = tmp->next;
        index++;
    }
    
    return tmp->next;
}