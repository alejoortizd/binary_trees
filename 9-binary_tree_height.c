#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 * @tree: pointer that point to the parent node
 * Return: 1 or 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t _left = 0;
	size_t _right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		_right = binary_tree_height(tree->right) + 1;
	if (_left < _right)
		return (_right);
	return (_left);
}
