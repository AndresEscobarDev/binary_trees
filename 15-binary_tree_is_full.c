#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: If binary tree is full return 1 otherwise 0 or
 * if tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);
	return ((a == b) ? 1 : 0);
}
