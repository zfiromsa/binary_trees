#include "binary_trees.h"
/**
 * binary_tree_rotate_left - func that perform a left-rotation ona binary tree
 *
 * @tree: is a pointer to the root node of the tree to rotate.
 * Return: tree OR node.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree || !tree->right)
		return (NULL);
	node = tree->right;
	tree->right = node->left;
	if (node->left)
		node->left->parent = tree;
	node->left = tree;
	node->parent = tree->parent;
	tree->parent = node;
	return (node);
}

