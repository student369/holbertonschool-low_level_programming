#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if the nood is root
 *
 * @node: The node to check
 *
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int p = 0;

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		p++;
	if (p == 1)
		return (1);
	else
		return (0);
}
