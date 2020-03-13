#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Entry point
 * @node: pointer that point to the parent node
 * Return: a pointer with the new node
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
