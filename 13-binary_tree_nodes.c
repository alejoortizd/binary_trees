#include "binary_trees.h"
/**
 * binary_tree_nodes - Entry point
 * @tree: pointer that point to the parent node
 * Return: 1 or 0
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t stree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	stree = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	return (stree);
}
