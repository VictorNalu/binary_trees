#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree to measure the size
*
* Return: Size of the binary tree, or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively compute the size of the left subtree */
	left_size = tree->left ? binary_tree_size(tree->left) : 0;

	/* Recursively compute the size of the right subtree */
	right_size = tree->right ? binary_tree_size(tree->right) : 0;

	return (1 + left_size + right_size);
}
