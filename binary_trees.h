#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Basic binary tree structure */
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function to create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function to print binary tree */
void binary_tree_print(const binary_tree_t *);
void binary_tree_print_recursive(const binary_tree_t *tree, int space);

#endif /* BINARY_TREES_H */
