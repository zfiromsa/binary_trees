#include "binary_trees.h"

/**
 * bst_remove - a function that removes a node from a Binary Search Tree.
 *
 * @root: is a pointer to the root node of the tree where you will remov node.
 * @value: is the value to remove in the tree.
 * Return: root.
*/
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return root;
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL) {
			bst_t *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			bst_t *temp = root->left;
			free(root);
			return temp;
		}
		bst_t *temp = minValueNode(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return root;
}
