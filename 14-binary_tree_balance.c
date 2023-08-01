#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left += binary_tree_balance(tree->left);
	right += binary_tree_balance(tree->right);
	if (tree->left)
		left++;
	if (tree->right)
		right++;
	return (left - right);
}
