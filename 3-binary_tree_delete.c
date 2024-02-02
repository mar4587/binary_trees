#include "binary_trees.h"

/**
 * binary_tree_delete - This function deletes an entire binary tree.
 * @tree: the pointer to root node of the tree to delete.
 *
 * If tree is NULL, do nothing.
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

