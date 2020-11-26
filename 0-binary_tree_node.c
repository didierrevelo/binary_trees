#include "binary_trees.h"
/**
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_son;

    new_son = malloc(sizeof(binary_tree_t));
    if (new_son == NULL)
        return (NULL);
    new_son->left = NULL;
    new_son->right = NULL;
    new_son->parent = parent;
    new_son->n = value;
    return(new_son);
}
