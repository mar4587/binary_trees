#include "binary_trees.h"

/**
 * binary_tree_node - The code creates a binary tree.
 *
 * @parent: the A pointer to node of the parent node
 * @value: the value of the new node
 *
 * When created, a node does not have any child.
 *
 * Return: A pointer to new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnod = NULL;

	newnod = malloc(sizeof(binary_tree_t));
	if (newnod != NULL)
	{
		newnod->left = NULL;
		newnod->right = NULL;
		newnod->parent = parent;
		newnod->n = value;
	}
	return (newnod);
}
