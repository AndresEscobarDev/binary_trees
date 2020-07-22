#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth
 * Return: Depth of a node in a binary tree or
 * if tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
