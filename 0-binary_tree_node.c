#include "binary_trees.h"

/**
 * inary_tree_node - a function that creates a binary tree node.
 *
 * @parent:  is a pointer to the parent node of the node to create.
 * @value:  is the value to put in the new node.
 * Return: NULL on failure or child.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->parent = parent;
	child->left = NULL;
	child->right = NULL;
	child->n = value;
	return (child);
}

