#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/* Helper function to print a binary tree node */
void binary_tree_print(const binary_tree_t *tree, int level)
{
	int  i;
	if (tree == NULL)
	{
		return;
	}

	binary_tree_print(tree->right, level + 1);
	for (i = 0; i < level; i++)
	{
		printf("    ");
	}
	printf("(%03d)\n", tree->value);
	binary_tree_print(tree->left, level + 1);
}
