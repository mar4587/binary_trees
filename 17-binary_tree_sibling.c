#include "binary_trees.h"

/**
 * binary_tree_sibling - The code finds the sibling of a node.
 * @node: A pointer to node to find the sibling.
 *
 * If node is NULL or the parent is NULL, return NULL.
 * If node has no sibling, return NULL.
 *
 * Return:  A pointer to sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if ((node != NULL) && (node->parent != NULL))
	{
		left = node->parent->left;
		right = node->parent->right;
	}
	return (left == node ? right : left);
}
