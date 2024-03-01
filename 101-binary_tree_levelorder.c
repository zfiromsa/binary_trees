#include "binary_trees.h"

/**
 * binary_tree_levelorder -  a func goes through level-order traversal.
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front, rear;
	const binary_tree_t **queue;

	if (tree == NULL || func == NULL)
		return;

	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;

	front = 0;
	rear = 0;
	queue[rear++] = tree;

	while (front != rear)
	{
		const binary_tree_t *current = queue[front++];

		func(current->n);
		if (current->left != NULL)
			queue[rear++] = current->left;
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
	free(queue);
}

