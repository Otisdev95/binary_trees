#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *existing, *new;

	if (tree)
	{
		existing = *tree;

		if (existing == NULL)
		{
			new = binary_tree_node(existing, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < existing->n) /* left subtree insertion */
		{
			if (existing->left != NULL)
				return (bst_insert(&existing->left, value));

			new = binary_tree_node(existing, value);
			if (new == NULL)
				return (NULL);
			return (existing->left = new);
		}

		if (value > existing->n) /* right subtree insertion */
		{
			if (existing->right != NULL)
				return (bst_insert(&existing->right, value));

			new = binary_tree_node(existing, value);
			if (new == NULL)
				return (NULL);
			return (existing->right = new);
		}
	}
	return (NULL);
}
