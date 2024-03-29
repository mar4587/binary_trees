#include "binary_trees.h"

/**
 * binary_tree_postorder - The code goes through a binary tree using,
 * post-order traversal.
 * @tree: A pointer to root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * If tree or func is NULL, do nothing.
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
