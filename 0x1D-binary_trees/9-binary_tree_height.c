#include "binary_trees.h"

/**
 * binary_tree_height - function to get the heiht of a node
 *
 * @tree: The tree to check
 *
 * Return: 1 or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		h++;
	if (tree->right != NULL)
		h++;
	return (h);
}
