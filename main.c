#include "node_header.h"
#include <stdio.h>

int extract_node(){ //25 min


    return 0;
}

node_t push_back(){ // 30 min

}


int main() {

    node_t *head;
    node_t *tmp;
    int index = 0;

    for(index = 0; index < 15; index++) {
        tmp = create_new_node(index);
        head = insert_at_head(&head, tmp);
    }
    for(index = 0; index < 15; index++) {
        tmp = create_new_node(index);
        head = insert_at_head(&head, tmp);
    }
    test_print_list(head);
    
    remove_duplicate_on_node(head);
    printf("\n");
    test_print_list(head);

    // printf("head value : %i\n ", go_to_node(head, 2)->value);

    // tmp = find_node(head, 7);
    // printf("found node with value %d\n", tmp->value);
    
    // printf("min linked list value is %i\n", node_get_min(head));
    // printf("max linked list value is %i\n", node_top(head)); 

    // insert_after_node(tmp,create_new_node(80));
    // tmp = find_node(head, 1);
    // printf("found node with value %d\n", tmp->value);

    // delete_node_on_key(&head, 7);
    
    // reverse_node_order(&head);

    // test_print_list(head);
    
    free_node(head);
    
    printf("\n");
    return 1;
}