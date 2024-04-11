#include "binary_trees.h"
#include "queue.h"

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t;
	queue_t *queue;

	if (tree == NULL || func == NULL)
		return;

	/* Create a queue to store the nodes */
	queue = queue_create();

	if (queue == NULL)
		return;

	/* Enqueue the root node */
	queue_push(queue, (void *)tree);

	/* Traverse the tree level by level */
	while (!queue_empty(queue))
	{
		/* Dequeue a node */
		binary_tree_t *node = (const binary_tree_t *)queue_front(queue);

		queue_pop(queue);

		/* Call the function for the node */
		func(node->n);

		/* Enqueue the left child if exists */
		if (node->left != NULL)
			queue_push(queue, (void *)node->left);

		/* Enqueue the right child if exists */
		if (node->right != NULL)
			queue_push(queue, (void *)node->right);
	}

	/* Free the queue */
	queue_delete(queue);
}
