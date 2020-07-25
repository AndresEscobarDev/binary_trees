#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Size of the tree + 1.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	if (a >= b)
		return (a + 1);
	return (b + 1);
}

/**
 * binary_tree_levelorder_aux - Function that goes through a binary
 * tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * @h: Row to aply function.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder_aux(const binary_tree_t *tree,
								void (*func)(int), size_t h)
{
	if (!h)
	{
		func(tree->n);
		return;
	}
	binary_tree_levelorder_aux(tree->left, func, h - 1);
	binary_tree_levelorder_aux(tree->right, func, h - 1);
}
/**
 * binary_tree_levelorder - Function that goes through a binary tree
 * using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = binary_tree_height(tree), i;

	if (!tree || !func)
		return;
	for (i = 0; i < h; i++)
	{
		binary_tree_levelorder_aux(tree, func, i);
	}
}
