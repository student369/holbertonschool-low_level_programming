#include "binary_trees.h"

/**
 * binary_tree_depth - function to get the depth of a node
 *
 * @tree: The tree to check
 *
 * Return: 1 or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		d++;
	}
	return (d);
}
