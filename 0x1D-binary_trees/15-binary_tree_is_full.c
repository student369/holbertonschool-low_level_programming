#include "binary_trees.h"
#include <stdio.h>

size_t binary_tree_one_child(const binary_tree_t *tree);
/**
 * binary_tree_one_child - function to count the nodes with
 * one child
 *
 * @tree: The tree
 *
 * Return: 0 or more
 */
size_t binary_tree_one_child(const binary_tree_t *tree)
{
	int c = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		c = 1;
	return (binary_tree_one_child(tree->left)
		+ c +
		binary_tree_one_child(tree->right));
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
	if (binary_tree_one_child(tree))
		return (0);
	else
		return (1);
}
