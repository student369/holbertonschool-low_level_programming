#include "binary_trees.h"

/**
 * binary_tree_size - function to get the size of the BT
 *
 * @tree: The tree
 *
 * Return: void
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left)
		+ 1 + binary_tree_size(tree->right));
}
