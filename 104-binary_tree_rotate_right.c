#include "binary_trees.h"
/**
 * binary_tree_rotate_right - func that perform a left-rotation ona binary tree
 * 
 * @tree: is a pointer to the root node of the tree to rotate.
 * Return: tree OR node. 
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (!tree || !tree->left)
		return (NULL);
	node = tree->left;
	tree->left = node->right;
	if (node->right)
		node->right->parent = tree;
	node->right = tree;
	node->parent = tree->parent;
	tree->parent = node;
	return node;
}

