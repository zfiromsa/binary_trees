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


/**
 * binary_tree_is_avl - a fun that checks if a binary tree is a valid AVL Tree
 *
 * @tree: is a pointer to the root node of the tree to check,
 * Return: 0 or 1.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int Lheight, Rheight;

	if (tree == NULL)
		return (1);
	Rheight = binary_tree_height(tree->right);
	Lheight = binary_tree_height(tree->left);
	if (abs(left_height - right_height) > 1)
		return (0);
	if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right))
		return (0);
	return (1);
}

