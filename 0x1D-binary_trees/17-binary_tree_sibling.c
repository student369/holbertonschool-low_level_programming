#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - function to get the sibling node
 *
 * @node: The node
 *
 * Return: the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL ||
	    node->parent->right == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	return (NULL);
}
