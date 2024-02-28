#include "binary_trees.h"
/**
 * binary_tree_nodes - a fun counts thenodes with at least 1 child in a binary
 *
 * @tree: is a pointer to root node of the tree to count the number of nodes
 * Return: nodes.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree == NULL)
		return (nodes);
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (nodes + 1);
	}
	return (nodes);
}

