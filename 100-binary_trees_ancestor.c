#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: A pointer to first node.
 * @second: A pointer to second node.
 *
 * Return: A pointer to lowest common ancestor node of the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t dpth_frst = 0, depth_second = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	/* get the depth of the first and second node */
	dpth_frst = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);
	/*
	* check if the depth of the first node is greater than the second node.
	* If so, we move the first node up the tree until the depth of the first
	* node is equal to the depth of the second node.
	*/
	while (dpth_frst > depth_second)
	{
		first = first->parent;
		dpth_frst--;
	}
	/*
	* check if the depth of the second node is greater than the depth of
	* the first node. If so, we move the second node up the tree until the
	* depth of the second node is equal to the depth of the first node.
	*/
	while (depth_second > dpth_frst)
	{
		second = second->parent;
		depth_second--;
	}
	/*
	* check if the first node is equal to the second node. If so, we return
	* the first node. If the first node is not equal to the second node, we move
	* the first node up the tree and the second node up the tree then repeat
	* the first statement of this comment.
	*/
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: A pointer to node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
