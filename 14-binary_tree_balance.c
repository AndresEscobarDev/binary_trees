#include "binary_trees.h"
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
 * binary_tree_balance - Function that measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: balance factor of a binary tree or
 * if tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_height_aux(tree->left);
	b = binary_tree_height_aux(tree->right);
	return (a - b);
}
