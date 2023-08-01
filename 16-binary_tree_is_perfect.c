#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of leaves in the tree, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		leaves++;
	return (leaves);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if tree is full, 0 if tree is NULL or not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	if (!tree->left && !tree->right)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if tree is perfect, 0 if tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_leaves(tree->left) ==
	    binary_tree_leaves(tree->right))
		return (1);
	return (0);
}
