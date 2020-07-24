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
/**
 * binary_trees_ancestor - Function that finds the lowest common
 * ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: Pointer to the lowest common ancestor node of the two given nodes,
 * if no common ancestor was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *n1, *n2;
	size_t f, s;
	int r;

	if (!first || !second)
		return (NULL);
	f = binary_tree_depth(first);
	s = binary_tree_depth(second);
	r = f - s;
	n1 = (binary_tree_t *)first;
	n2 = (binary_tree_t *)second;
	if (f > s)
	{
		while (n1 && n2 && r)
		{
			n1 = n1->parent;
			r--;
		}
		if (n1 == n2)
			return (n1);
	}
	else
	{
		while (n1 && n2 && r)
		{
			n2 = n2->parent;
			r++;
		}
		if (n1 == n2)
			return (n1);
	}
	while (n1 && n2)
	{
		n1 = n1->parent;
		n2 = n2->parent;
		if (n1 == n2)
			return (n1);
	}
	return (NULL);
}
