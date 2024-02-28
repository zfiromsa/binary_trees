#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a node
 *
 * @tree: is a pointer to the node to measure the depth.
 * Return: If tree is NULL 0 or Lheight, Rheight.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lheight, Rheight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	Lheight = binary_tree_height(tree->left);
	Rheight = binary_tree_height(tree->right);
	if (Lheight >= Rheight)
		return (Lheight + 1);
	return (Rheight + 1);
}

