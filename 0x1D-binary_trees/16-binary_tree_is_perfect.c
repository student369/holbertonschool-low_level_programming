#include "binary_trees.h"

int binary_tree_is_leaf_depth(const binary_tree_t *node);
/**
 * binary_tree_depth - function to get the depth of a node
 *
 * @tree: The tree to check
 *
 * Return: 1 or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		d++;
	}
	return (d);
}

/**
 * binary_tree_is_leaf_depth - function to check
 * the leads in the  BT and the same depth
 *
 * @node: The node to check
 *
 * Return: the new node.
 */
int binary_tree_is_leaf_depth(const binary_tree_t *node)
{
	int l = 0, cd = 0;
	static int d, pd;

	if (node == NULL)
		return (0);
	if (node->left == NULL)
		l++;
	if (node->right == NULL)
		l++;
	if (l == 2)
	{
		if (d == 0)
			pd = binary_tree_depth(node);
		if (d > 0)
		{
			cd = binary_tree_depth(node);
			if (cd != pd)
			{
				d++;
				return (0);
			}
		}
		d++;
		return (1);
	}
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
		+ binary_tree_is_leaf_depth(tree) +
		binary_tree_leaves(tree->right));
}

/**
 * binary_tree_is_perfect - function to check if the
 * BT is perfect.
 *
 * @tree: The tree.
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_leaves(tree) % 2 == 0)
		return (1);
	else
		return (0);
}
