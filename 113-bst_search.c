#include "binary_trees.h"

/**
 * bst_t *bst_search - a fun that searches for a value in a Binary Search Tree
 *
 * @tree: a function that searches for a value in a Binary Search Tree.
 * @value: is the value to search in the tree.
 * Return: NULL OR tree.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		else if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (NULL);
}

