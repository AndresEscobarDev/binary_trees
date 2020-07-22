#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: Pointer to the node to find the uncle.
 * Return: Pointer to the uncle node or if node has no uncle or
 * if node is NULL, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return (NULL);
}
