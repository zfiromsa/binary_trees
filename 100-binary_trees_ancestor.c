#include "binary_trees.h"

/**
 * find_ancestor - fun that finds lowest common ancestor of two nodes
 *
 * @tree: function that finds the lowest common ancestor of two nodes.
 * @node1: is a pointer to the first node.
 * @node2: is a pointer to the second node.
 * Return NULL OR tree.
 */
binary_tree_t *find_ancestor(const binary_tree_t *tree, const binary_tree_t *node1, const binary_tree_t *node2)
{
	binary_tree_t *L_ancestor, *R_ancestor;

	if (!tree)
		return (NULL);
	if (tree == node1 || tree == node2)
		return ((binary_tree_t *)tree);
	L_ancestor = find_ancestor(tree->left, node1, node2);
	R_ancestor = find_ancestor(tree->right, node1, node2);
	if (L_ancestor && R_ancestor)
		return ((binary_tree_t *)tree);
	return (L_ancestor != NULL) ? L_ancestor : R_ancestor;
}

/**
 * binary_trees_ancestor - fun that finds lowest common ancestor of two nodes
 *
 * @tree: function that finds the lowest common ancestor of two nodes.
 * @first: is a pointer to the first node.
 * @second: is a pointer to the second node.
 * Return NULL OR tree.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	return (find_ancestor(first, first, second));
}

