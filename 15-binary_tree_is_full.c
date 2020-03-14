#include "binary_trees.h"
/**
 * binary_tree_is_full - Entry point
 * @tree: pointer that point to the parent node
 * Return: 1 or 0
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int f = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	f = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (f);
}
