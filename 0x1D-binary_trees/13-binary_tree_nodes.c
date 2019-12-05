#include "binary_trees.h"

/**
 * binary_tree_nodes - function to get the nodes
 * with 1 child in the BT
 *
 * @tree: The tree.
 *
 * Return: The count of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left || tree->right) && tree->parent)
		return (1);
	if (!tree->left)
		return (0);
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1);
}
