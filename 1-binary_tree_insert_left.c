#include "binary_trees.h"

/**
 * inary_tree_node - a function that creates a binary tree node.
 *
 * @parent:  is a pointer to the parent node of the node to create.
 * @value:  is the value to put in the new node.
 * Return: NULL on failure or child
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_node;

    if (parent == NULL)
        return (NULL);
    left_node = binary_tree_node(parent, value);
    if (left_node == NULL)
        return (NULL);
    if (parent->left != NULL)
    {
        left_node->left = parent->left;
        left_node->left->parent = left_node;
    }
    parent->left = left_node;
    return (left_node);
}

