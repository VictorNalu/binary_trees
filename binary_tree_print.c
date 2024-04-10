#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

#define COUNT 10

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_print_recursive(tree, 0);
}

/**
 * binary_tree_print_recursive - Prints a binary tree recursively
 * @tree: Pointer to the current node in the tree
 * @space: Number of spaces to print before the node value
 */
void binary_tree_print_recursive(const binary_tree_t *tree, int space)
{
	int i;
	if (tree == NULL)
		return;

	space += COUNT;

	binary_tree_print_recursive(tree->right, space);

	printf("\n");
	for (i = COUNT; i < space; i++)
		printf(" ");
	printf("%d\n", tree->n);

	binary_tree_print_recursive(tree->left, space);
}
