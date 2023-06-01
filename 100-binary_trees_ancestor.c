#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: A pointer to the lowest node.
 *		NULL, if no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree *mom, *dad;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	mom = first->parent;
	dad = second->parent;

	if (first == dad || mom == NULL || (mom->parent == NULL && dad))
		return (binary_trees_ancestor(first, dad));

	else if (mom == second || dad == NULL || (dad->parent == NULL && mom))
		return (binary_trees_ancestor(mom, second));

	return (binary_trees_ancestor(mom, dad));
}
