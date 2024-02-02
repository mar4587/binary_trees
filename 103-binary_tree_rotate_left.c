#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: A pointer to root node of the tree to rotate.
 *
 * Return: A pointer to new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newroot;

	/* If the tree is empty, return NULL. */
	if (!tree)
		return (NULL);

	/*
	* If the tree is not empty, create a newroot variable and set it to
	* the right child of the tree.
	*/
	newroot = tree->right;

	/* If the newroot is empty, return the tree. */
	if (!newroot)
		return (tree);

	/* Set the right child of the tree to the left child of the newroot. */
	tree->right = newroot->left;

	/*
	* If the left child of the newroot is not empty, set the parent of the
	* left child of the newroot to the tree.
	*/
	if (newroot->left)
		newroot->left->parent = tree;

	/* Set the parent of the newroot to the parent of the tree. */
	newroot->parent = tree->parent;

	/* Set the left child of the newroot to the tree. */
	newroot->left = tree;

	/* Set the parent of the tree to the newroot. */
	tree->parent = newroot;

	/* Return the newroot. */
	return (newroot);
}
