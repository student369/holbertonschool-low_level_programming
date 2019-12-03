#include "binary_trees.h"
#include <stdio.h>
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
