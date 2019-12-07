#include "binary_trees.h"

/**
 * bt_depth - function to get the depth of a node
 * top down
 *
 * @tree: The tree to check
 *
 * Return: 1 or 0
 */
size_t bt_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * bt_is_perfect - function to check it the BT
 * is perfect recursibly.
 *
 * @t: The tree
 * @d: The depht
 * @l: The level
 *
 * Return: 1 or 0
 */
int bt_is_perfect(const binary_tree_t *t, int d, int l)
{
	if (t->left == NULL && t->right == NULL)
		return ((d == l + 1) ? 1 : 0);
	if (t->left == NULL || t->right == NULL)
		return (0);
	return (bt_is_perfect(t->left, d, l + 1) &&
		bt_is_perfect(t->right, d, l + 1));
}

/**
 * binary_tree_is_perfect - function to check it the BT
 * is perfect.
 *
 * @tree: The tree.
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);
	d = bt_depth(tree);
	return (bt_is_perfect(tree, d, 0));
}
