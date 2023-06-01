#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 *				using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 * Return: Nothing if tree or func is NULL.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, lev;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (lev = 1; lev <= height; lev++)
		binary_tree_lev(tree, lev, func);
}

/**
 * binary_tree_lev - Perform a function on a specific level of a binary tree
 * @tree: pointer to the root of the tree
 * @lev: level of the tree to perform a function on
 * @func: function to perform
 *
 * Return: Nothing
 */

void binary_tree_lev(const binary_tree_t *tree, size_t lev, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (lev == 1)
		func(tree->n);

	else if (lev > 1)
	{
		binary_tree_lev(tree->left, lev - 1, func);
		binary_tree_lev(tree->right, lev - 1, func);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	else if (tree)
	{
		h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return ((h_left > h_right) ? h_left : h_right);
}
