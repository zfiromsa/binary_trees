#include "binary_trees.h"
/**
 * binary_tree_balances - a fun counts thenodes with at least 1 child in a binary
 *
 * @tree: is a pointer to root node of the tree to balances the number of nodes
 * Return: rnodes, lnodes.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lnodes, rnodes;

	rnodes = lnodes = 0;
	if (tree == NULL)
		return (lnodes);
	lnodes = binary_tree_balance(tree->left);
	rnodes = binary_tree_balance(tree->right);
	return (lnodes - rnodes);
}

