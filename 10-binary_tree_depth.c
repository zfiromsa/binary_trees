#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 *
 * @tree: is a pointer to the node to measure the depth.
 * Return: If tree is NULL 0 or LDepth, RDepth.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t LDepth, RDepth;

	if (tree == NULL)
		return (0);
	else
	{
		LDepth = binary_tree_depth(tree->left);
		RDepth = binary_tree_depth(tree->right);
		if (LDepth > RDepth)
			return (LDepth + 1);
		return (RDepth + 1);

	}
}

