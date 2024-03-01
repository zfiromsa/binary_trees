#include "binary_trees.h"

/**
 * check_bst - fun that checks if a binary tree is a valid Binary Search Tree.
 *
 * @tree: is a pointer to the root node of the tree to check.
 * @prev: the value of the previous node
 * Return: true OR false
 */
bool check_bst(const binary_tree_t *tree, int *prev)
{
	if (tree == NULL)
		return true;
	if (!check_bst(tree->left, prev))
		return false;
	if (tree->n <= *prev)
		return false;
	*prev = tree->n;
	return check_bst(tree->right, prev);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid BST
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev;

	if (tree == NULL)
		return 0;

	prev = INT_MIN;
	return check_bst(tree, &prev);
}

