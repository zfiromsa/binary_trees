#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a given node is a leaf.
 *
 * @node: Apoint to the node to check
 * Return: 1 if its leaf otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    return(node->parent == NULL);
}

