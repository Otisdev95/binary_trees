#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: The pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: NULL on failure
 *          Otherwise -  A pointer to new node 
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_trees_t));
    if (new_node == NULL)
}