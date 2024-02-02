#include "binary_trees.h"

/**
 * binary_tree_insert_left - The code inserts a node as the,
 * left-child of another node.
 *
 * @parent: A pointer to node to insert the left-child in.
 * @value: A value to store in the new node.
 *
 * Return: the new node, or NULL on failure or if parent,
 * is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnod = NULL;

	if (parent != NULL)
	{
		newnod = malloc(sizeof(binary_tree_t));
		if (newnod != NULL)
		{
			newnod->left = parent->left;
			newnod->right = NULL;
			newnod->parent = parent;
			newnod->n = value;
			if (parent->left != NULL)
				parent->left->parent = newnod;
			parent->left = newnod;
		}
	}
	return (newnod);
}
