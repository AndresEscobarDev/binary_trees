#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Binary_tree_is_leaf.
 * @node: Pointer to the node to check.
 * Return: Return 1 if node is a leaf, otherwise 0
 * or if node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->right || node->left) ? 0 : 1);
}
