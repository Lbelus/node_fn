#include "node_header.h"

int linked_list_main(char ** str_arr) {

    node_t *head;
    node_t *tmp;
    int index = 0;

    while(str_arr[index] != NULL) {
        tmp = create_new_node(index);
        head = insert_at_head(&head, tmp);
        index++;
    }

    tmp = find_node(head, 7);
    //printf("found node with value %d\n", tmp->value);
    
    insert_after_node(tmp,create_new_node(80));
    tmp = find_node(head, 1);
    //printf("found node with value %d\n", tmp->value);

    delete_node(&head, 7);
    
    reverse_node_order(&head);

    test_print_list(head);
    
    free_node(head);
    
    //printf("\n");

    return 1;
}