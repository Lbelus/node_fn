#include "node_header.h"
#include <stdio.h>



//node_t push_back(){ // 30 min

//}


int main() {

    node_t *head = 0;
    node_t *head2 = 0;
    //node_t *split00;
    node_t *tmp_node = 0;
    int index;

    for(index = 0; index < 10; index++) {
        tmp_node = create_new_node(index);
        head = insert_at_head(&head, tmp_node);
    }
    for(index = 0; index < 10; index++) {
        tmp_node = create_new_node(index);
        head2 = insert_at_head(&head2, tmp_node);
    }
    
    test_print_list(head);
    test_print_list(head2);
    //printf("%i",node_count(head)); 
    //int len = recur_node_count(head, 0);
    //remove_duplicate_on_node(head);
    printf("\nsplit\n");
    //test_print_list(head);
    
    node_t *split01 = split_node_on_pos(head, 3);

    test_print_list(split01);
    printf("\n");
    //insert_after_node(head,create_new_node(80));
    test_print_list(head);
    printf("\n");
    //test_print_list(split01);
    // printf("head value : %i\n ", go_to_node(head, 2)->value);

    //tmp = recur_find_node_at_key(head, 7);
    //printf("found node with value %d\n", tmp->value);
    
    // printf("min linked list value is %i\n", node_get_min(head));
    // printf("max linked list value is %i\n", node_top(head)); 
    //recur_concatenate_llist(head, head2);
    concatenate_llist(head, head2);
    concatenate_llist(head, split01);
    //head = insert_at_head(&head, split01->next);
    //head->next = NULL;
    printf("\n merge\n");
    test_print_list(head);
    
    // insert_after_node(tmp,create_new_node(80));
    // tmp = find_node(head, 1);
    // printf("found node with value %d\n", tmp->value);

    // delete_node_on_key(&head, 7);
    
    // reverse_node_order(&head);

    head = sort_ascending(head);
    printf("\n sorted list \n");
    test_print_list(head);
    
    recur_free_node(head);
    //free_node(split01);
    
    printf("\n");
    return 0;
}