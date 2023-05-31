#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: NULL on failure
 *		Otherwise - Return pointer to the created node
 * Description: If parent already has a left-child, the new node must take
 *		its place, and the old left-child must be set as the
 *		left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = alloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n value;
	new_node->left = parent->left;
	parent->left = new_node;
	new_node->right = NULL;

	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
