#include "binary_trees.h"

/**
 * binary_tree_deletes - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_deletes(tree->left);
	binary_tree_deletes(tree->right);
	free(tree);
}
