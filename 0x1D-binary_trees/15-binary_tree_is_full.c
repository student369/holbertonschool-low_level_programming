#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check the leads in the  BT
 *
 * @node: The node to check
 *
 * Return: the new node.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int l = 0;

	if (node == NULL)
		return (0);
	if (node->left == NULL)
		l++;
	if (node->right == NULL)
		l++;
	if (l == 2)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_full - function to check if the
 * BT is full.
 *
 * @tree: The tree.
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((binary_tree_is_leaf(tree) == 1) ||
		(tree->left != NULL && tree->right != NULL))
		return (1);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
}
