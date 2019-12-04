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
 * binary_tree_leaves - function to count the BT leaves
 *
 * @tree: The tree
 *
 * Return: the count of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_leaves(tree->left)
		+ binary_tree_is_leaf(tree) +
		binary_tree_leaves(tree->right));
}
