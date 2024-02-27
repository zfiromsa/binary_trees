#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that creates a binary tree node.
 *
 * @parent:  is a pointer to the parent node of the node to create.
 * @value:  is the value to put in the new node.
 * Return: NULL on failure or right_node
 * 
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}

