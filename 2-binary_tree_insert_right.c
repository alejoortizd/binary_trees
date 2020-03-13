#include "binary_trees.h"
/**
 * binary_tree_insert_right - Entry point
 * @parent: pointer that point to the parent node
 * @value: the data inside the node
 * Return: a pointer with the new node
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->parent = parent;
	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
