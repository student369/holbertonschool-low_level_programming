#include "binary_trees.h"

/**
 * binary_tree_height - function to get the heiht of a node
 *
 * @tree: The tree to check
 *
 * Return: 0, 1 or 2
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

/**
 * binary_tree_nodes - function to count nodes with 1 child
 *
 * @tree: The tree
 *
 * Return: the new node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int c = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree) > 0)
		c = 1;
	else
		c = 0;
	return (binary_tree_nodes(tree->left) + c +
		binary_tree_nodes(tree->right));
}
