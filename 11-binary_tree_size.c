#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a node
 *
 * @tree: is a pointer to the node to measure the size.
 * Return: If tree is NULL 0 or Lsize, Rsize.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t Lsize, Rsize;

	if (tree == NULL)
		return (0);
	Lsize = binary_tree_size(tree->left);
	Rsize = binary_tree_size(tree->right);
	return (Lsize + 1 + Rsize);
}


