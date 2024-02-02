#include "binary_trees.h"

/**
 * binary_tree_inorder - The code goes through a binary tree using,
 * in-order traversal.
 * @tree: A pointer to root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * If tree or func is NULL, do nothing.
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
