#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 *
 * @tree: is a pointer to the node to measure the depth.
 * Return: If tree is NULL 0 or LDepth, RDepth.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth;

	while (tree != NULL && tree->parent != NULL)
	{
		Depth++;
		tree = tree->parent;
	}
	return (Depth);
}

