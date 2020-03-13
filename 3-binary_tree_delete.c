#include "binary_trees.h"
/**
 * binary_tree_delete - Entry point
 * @tree: pointer that point to the parent node
 * Return: a pointer with the new node
 **/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
