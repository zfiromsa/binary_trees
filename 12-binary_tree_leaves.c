#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of thetree to count the numb of leaves
 * Return: leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree == NULL)
		return (leaves);
	if (tree->left == NULL && tree->right == NULL)
		return (leaves + 1);
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}

