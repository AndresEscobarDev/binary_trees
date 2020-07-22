#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 * Return: Number nodes with at least 1 child in a binary tree or
 * if tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (a + b + 1);
	return (a + b);
}
