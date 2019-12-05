#include "binary_trees.h"

size_t bt_height(const binary_tree_t *t, size_t h);
/**
 * bt_height - recursive function to get the height of the BT
 *
 * @t: The tree.
 * @h: The current height
 *
 * Return: the height
 */
size_t bt_height(const binary_tree_t *t, size_t h)
{
	size_t hl, hr;

	if (t == NULL)
		return (h);
	h++;
	hl = bt_height(t->left, h);
	hr = bt_height(t->right, h);
	if (hl > hr)
		return (hl);
	return (hr);
}

/**
 * binary_tree_height - function to get the height of the BT
 *
 * @tree: The tree.
 *
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bt_height(tree, 0) - 1);
}
