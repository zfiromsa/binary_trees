#include "binary_trees.h"

/**
 * binary_tree_uncle -  a function that finds the uncle of a node.
 *
 * @node: is a pointer to the node to find the uncle
 * Return: NULL OR Unode.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

