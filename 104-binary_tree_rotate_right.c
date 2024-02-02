#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: the pointer to root node of the tree to rotate.
 *
 * Return: the pointer to new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newrt;

	/* If the tree is empty, return NULL. */
	if (!tree)
		return (NULL);

	/* Set the new root to the left child of the tree. */
	newrt = tree->left;

	/* If the new root exists, */
	if (newrt)
	{
		/* set the left child of the tree to the right child of the new root */
		tree->left = newrt->right;

		/* If the right child of the new root exists, */
		if (newrt->right)
			/* set the parent of the right child to the tree. */
			newrt->right->parent = tree;

		/* Set the right child of the new root to the tree. */
		newrt->right = tree;
		/* Set the parent of the new root to the parent of the tree. */
		newrt->parent = tree->parent;
		/* Set the parent of the tree to the new root. */
		tree->parent = newrt;
	}
	/* Return the new root */
	return (newrt);
}
