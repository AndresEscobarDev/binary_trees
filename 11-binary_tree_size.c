#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: Size of a binary tree or if tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	return (a + b + 1);
}
