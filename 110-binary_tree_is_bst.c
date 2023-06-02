#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1, if tree is a valid BST
 *		0, if tree is not a valid BST
 *		0, if tree is NULL.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_valid(tree, INT_SMALL, INT_BIG));
}

/**
 * is_bst_valid - checks if a binary tree is a valid BST
 * @tree: A pointer to the root node of the tree to check
 * @small: The value of the smaller node
 * @big: The value if the bigger node
 *
 * Return: 1, if tree is a valid BST
 *		0, if tree is not a valid BST
 */

int is_bst_valid(const binary_tree_t *tree, int small, int big)
{
	if (tree)
	{
		if (tree->n < small || tree->n > big)
			return (0);

		return (is_bst_valid(tree->left, small, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, big));
	}
	return (1);
}
