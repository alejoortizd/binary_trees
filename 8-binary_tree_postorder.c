#include "binary_trees.h"
/**
 * binary_tree_postorder - Entry point
 * @tree: pointer that point to the parent node
 * @func: function that call all nodes
 * Return: 1 or 0
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
