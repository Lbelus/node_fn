#include "node_header.h"

node_t *create_new_node(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}


node_t *create_new_node2(int value) {
    node_t *result2 = malloc(sizeof(node_t));
    result2->value = value;
    result2->next = NULL;
    return result2;
}