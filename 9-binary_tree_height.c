#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: is a pointer to the root node of the tree to measure the height
* Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
	{
		if (tree->left == NULL && tree->right == NULL)
			return (binary_tree_height(tree->left));
		else
			return (binary_tree_height(tree->left) + 1);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (binary_tree_height(tree->right));
		else
			return (binary_tree_height(tree->right) + 1);
	}
}
