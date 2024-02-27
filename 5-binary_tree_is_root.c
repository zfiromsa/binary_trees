#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root,
 *
 * @node: Apoint to the node to check.
 * Return: 1 if its root otherwise 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    return(node->parent == NULL);
}

