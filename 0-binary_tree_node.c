#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}
	
	/* Set the value and parent of the new node */
	new_node->value = value;
	new_node->parent = parent;
	
	/* Initialize the left and right children to NULL */
	new_node->left = NULL;
	new_node->right = NULL;
	
	/* Return a pointer to the new node */
	return (new_node);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Create nodes */
	binary_tree_t *root = binary_tree_node(NULL, 98);
	binary_tree_t *node_1 = binary_tree_node(root, 12);
	binary_tree_t *node_2 = binary_tree_node(root, 402);
	binary_tree_t *node_3 = binary_tree_node(node_1, 6);
	binary_tree_t *node_4 = binary_tree_node(node_1, 16);
	binary_tree_t *node_5 = binary_tree_node(node_2, 256);
	binary_tree_t *node_6 = binary_tree_node(node_2, 512);

	/* Connect nodes */
	root->left = node_1;
	root->right = node_2;
	node_1->left = node_3;
	node_1->right = node_4;
	node_2->left = node_5;
	node_2->right = node_6;

	/* Print the tree structure */
	binary_tree_print(root, 0);

	/* Remember to free memory allocated for the nodes */
	free(root);
	free(node_1);
	free(node_2);
	free(node_3);
	free(node_4);
	free(node_5);
	free(node_6);

	return (0);
}
