#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    if (tree->left == NULL && tree->right == NULL)
        return 1;

    size_t leaves = 0;
    leaves += binary_tree_leaves(tree->left);
    leaves += binary_tree_leaves(tree->right);

    return leaves;
}
