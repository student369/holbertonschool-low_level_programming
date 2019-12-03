#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node
 * to the left.
 *
 * @parent: The parent node
 * @value: The value to the node
 *
 * Return: the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);
	nw = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (nw == NULL)
		return (NULL);
	nw->n = value;
	nw->right = NULL;
	nw->left = parent->left;
	nw->parent = parent;
	parent->left = nw;
	if (nw->left != NULL)
		nw->left->parent = nw;
	return (nw);
}
