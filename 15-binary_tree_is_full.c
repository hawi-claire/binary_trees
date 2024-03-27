#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * binary_tree_full_recursive - Checks if binary tree
 *                              is full recursive.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 0 is tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_full(tree));
}

int binary_tree_is_full_recursive(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (binary_tree_is_full_recursive(tree->left) &&
		binary_tree_is_full_recursive(tree->right));
}
