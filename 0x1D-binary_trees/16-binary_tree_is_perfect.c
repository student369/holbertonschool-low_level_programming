#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
size_t bt_heigh(const binary_tree_t *tree);
/**
 * binary_tree_is_full - function to check if the BT is full
 *
 * @tree: The tree.
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

/**
 * bt_heigh - function to get the height
 * of the BT
 *
 * @tree: The tree.
 *
 * Return: The height
 */
size_t bt_heigh(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL &&
	    tree->right == NULL)
		return (0);
	l = bt_heigh(tree->left);
	r = bt_heigh(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
/**
 * binary_tree_balance - function to get the balance
 * factor of the BT
 *
 * @tree: The tree.
 *
 * Return: The count of leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r, b = 0;

	if (tree == NULL)
		return (0);
	l = bt_heigh(tree->left);
	r = bt_heigh(tree->right);
	if (!tree->left)
		l--;
	if (!tree->right)
		r--;
	b = l - r;
	return (b);
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
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1 &&
	    binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
