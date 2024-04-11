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

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL; // Return NULL on failure to allocate memory
    }

    // Initialize the new node with the given value and parent
    new_node->parent = parent;
	new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node); // Return a pointer to the new node
}