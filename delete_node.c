#include "node_header.h"

void delete_node(node_t **head, int key) {
    node_t *tmp = *head;
    node_t *prev;

    if(tmp != NULL && tmp->value == key){
        *head = tmp->next;
        free(tmp);
        return;
    }
    while(tmp != NULL && tmp->value != key) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL){
        return;
    }
    prev->next = tmp->next;
    free(tmp);
}

/*
void delete_node(node_t *head, node_t *node_to_delete) {
    if(head == node_to_delete) {
        if(head->next == NULL) {
            return ;
        }
    }

    head->value = head->next->value;
    node_to_delete = head->next;
    head->next = head->next->next;
    free(node_to_delete);

    return;
}
*/