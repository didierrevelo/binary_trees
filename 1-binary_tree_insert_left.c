#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on \
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_son;

	if (parent == NULL)
		return (NULL);
	new_son = malloc(sizeof(binary_tree_t));
	if (new_son == NULL)
		free(new_son);
		return (NULL);
	new_son->left = NULL;
	new_son->right = NULL;
	new_son->parent = parent;
	new_son->n = value;
	if (parent->left != NULL)
	{
		new_son->left = parent->left;
		parent->left->parent = new_son;
		parent->left = new_son;
	}
	parent->left = new_son;
	return (new_son);
}
