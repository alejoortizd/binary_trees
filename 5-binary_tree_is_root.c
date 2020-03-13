#include "binary_trees.h"
/**
 * binary_tree_is_root - Entry point
 * @node: pointer that point to the parent node
 * Return: 1 or 0
 **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
