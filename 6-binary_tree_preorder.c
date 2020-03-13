#include "binary_trees.h"
/**
 * binary_tree_preorder - Entry point
 * @tree: pointer that point to the parent node
 * @func: function that call all nodes
 * Return: 1 or 0
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
