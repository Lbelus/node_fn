#ifndef __HEADERFILE_H_
#define __HEADERFILE_H_

#include <stdlib.h>

    #ifndef STRUCT_NODE
    #define STRUCT_NODE
    struct node {
        int value;
        struct node* next;
    };
    typedef struct node node_t;
    #endif

node_t *create_new_node(int value);
void delete_node_on_key(node_t **head, int key);
void delete_node_on_pos(node_t **head, int pos);
node_t *find_node(node_t *head, int value);
int node_top(node_t* head);
int node_get_min(node_t* head);
void insert_after_node(node_t *node_to_insert, node_t *newnode);
node_t *insert_at_head(node_t **head, node_t *node_to_insert);
void reverse_node_order(node_t **head);
void test_print_list(node_t *head);
void free_node(node_t *head);
node_t *go_to_node(node_t *head, int pos);
void remove_duplicate_on_node(node_t* head);
node_t *split_node_on_pos(node_t *head, int len);
int node_count(node_t *head);
int recur_node_count(node_t *head, int count);


#endif