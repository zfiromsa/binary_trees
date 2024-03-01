#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that measures the height of a node
 *
 * @tree: is a pointer to the node to measure the depth.
 * Return: 0 or j
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *Rtree, *Ltree;
	int Lheight, Rheight;

	if (!tree)
		return (0);
	Rheight = 0;
	Lheight = 0;
	Ltree = tree->left;
	Rtree = tree->right;
	while (Rtree)
	{
		Rheight++;
		Rtree = Rtree->right;
	}
	if (Lheight == Rheight)
		return (1);
	return (0);
}

