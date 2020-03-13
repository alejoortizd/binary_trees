#include "binary_trees.h"
/**
 * binary_tree_node - Entry point
 * @parent: pointer that point to the parent node
 * @value: the data inside the node
 * Return: a pointer with the new node
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

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
	return (newNode);
}
