#include "node_header.h"
#include <stdio.h>
int main() {

    node_t *head;
    node_t *tmp;
    int index = 0;

    for(index = 0; index < 15; index++) {
        tmp = create_new_node(index);
        head = insert_at_head(&head, tmp);
    }

    tmp = find_node(head, 7);
    printf("found node with value %d\n", tmp->value);
    
    printf("min linked list value is %i\n", node_get_min(head));
    printf("max linked list value is %i\n", node_top(head)); 

    insert_after_node(tmp,create_new_node(80));
    tmp = find_node(head, 1);
    printf("found node with value %d\n", tmp->value);

    delete_node(&head, 7);
    
    reverse_node_order(&head);

    test_print_list(head);
    
    free_node(head);
    
    printf("\n");
    return 1;
}