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
	size_t left_size = binary_tree_size(tree->left);

	/* Recursively compute the size of the right subtree */
	size_t right_size = binary_tree_size(tree->right);

	/* Return the size of the current node*/
    /*plus the sizes of the left and right subtrees */
	return (1 + left_size + right_size);
}
