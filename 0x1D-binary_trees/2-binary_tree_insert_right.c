#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that insert a node
 * to the right.
 *
 * @parent: The parent node
 * @value: The value to the node
 *
 * Return: the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);
	nw = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (nw == NULL)
		return (NULL);
	nw->n = value;
	nw->left = NULL;
	nw->right = parent->right;
	nw->parent = parent;
	parent->right = nw;
	if (nw->right != NULL)
		nw->right->parent = nw;
	return (nw);
}
