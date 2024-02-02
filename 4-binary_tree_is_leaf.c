#include "binary_trees.h"

/**
 * binary_tree_is_leaf - The code checks if a node is a leaf.
 * @node: A pointer to node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
	{
		n = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (n);
}
