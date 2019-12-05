#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the nodes with
 * one or mode child
 *
 * @tree: The tree
 *
 * Return: 0 or more
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		c = 1;
	return (binary_tree_nodes(tree->left)
		+ c +
		binary_tree_nodes(tree->right));
}
