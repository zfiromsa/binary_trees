#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return NULL;
    }
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return NULL;
    }
    else
    {
        if (parent->right != NULL)
        {
            new_node->right = parent->right;
            parent->right->parent = new_node;
        }

        parent->right = new_node;
    }
    return new_node;
}
