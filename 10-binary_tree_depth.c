#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *tmp;
	size_t depth = 0;

	if (!tree)
		return (0);

	tmp = (binary_tree_t *)tree;
	while (tmp)
	{
		if (tmp->parent)
			depth++;
		tmp = tmp->parent;
	}
	return (depth);
}
