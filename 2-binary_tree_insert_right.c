#include "binary_trees.h"

/**
 * binary_tree_insert_right - The code inserts a node as the,
 * right-child of another node.
 *
 * @parent: A pointer to node to insert the right-child in.
 * @value: A value to store in the new node.
 *
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 *
 * Return: the new node, or NULL on failure or if parent,
 * is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnod = NULL;

	if (parent != NULL)
	{
		newnod = malloc(sizeof(binary_tree_t));
		if (newnod != NULL)
		{
			newnod->left = NULL;
			newnod->right = parent->right;
			newnod->parent = parent;
			newnod->n = value;
			if (parent->right != NULL)
				parent->right->parent = newnod;
			parent->right = newnod;
		}
	}
	return (newnod);
}
