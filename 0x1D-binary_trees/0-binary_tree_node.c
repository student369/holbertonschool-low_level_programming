#include "binary_trees.h"

/**
 * binary_tree_node - function that create a binary tree node
 *
 * @parent: The parent node
 * @value: The value to the node
 *
 * Return: the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	nw = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	nw->n = value;
	nw->left = NULL;
	nw->right = NULL;
	nw->parent = parent;
	return (nw);
}
