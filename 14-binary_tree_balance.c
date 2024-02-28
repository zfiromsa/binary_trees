#include "binary_trees.h"
/**
 * binary_tree_balance - a fun counts thenodes with at least 1 child in a binary
 *
 * @tree: is a pointer to root node of the tree to balances the number of nodes
 * Return: rnodes, lnodes or 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lnodes, rnodes;

	rnodes = lnodes = 0;
	if (tree == NULL)
		return (0);
	lnodes = binary_tree_height(tree->left);
	rnodes = binary_tree_height(tree->right);
	return (lnodes - rnodes);
}

