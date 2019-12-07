#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_uncle - function to get the uncle node
 *
 * @node: The node
 *
 * Return: the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == NULL ||
	    node->parent->parent->right == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (NULL);
}
