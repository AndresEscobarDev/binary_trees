#include "binary_trees.h"
/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node or if node has no sibling or
 * if node is NULL or the parent is NULL, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
