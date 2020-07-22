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

/**
 * binary_tree_height_aux - Function that measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Size of the tree + 1.
 */
size_t binary_tree_height_aux(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_height_aux(tree->left);
	b = binary_tree_height_aux(tree->right);
	if (a >= b)
		return (a + 1);
	return (b + 1);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the binary tree is perfect otherwise return 0 or
 * if tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int a = 2, b, i;

	if (!tree)
		return (0);
	b = binary_tree_height_aux(tree);
	for (i = 0; i < b - 1; i++)
		a *= 2;
	return ((a - 1 == binary_tree_size(tree)) ? 1 : 0);
}
