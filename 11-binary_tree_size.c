#include "binary_trees.h"
/**
 * binary_tree_size - Entry point
 * @tree: pointer that point to the parent node
 * Return: 1 or 0
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t stree = 0;

	if (tree == NULL)
		return (0);
	stree = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (stree);
}
