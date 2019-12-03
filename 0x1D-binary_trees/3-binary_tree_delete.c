#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_delete - function that delete the BT
 *
 * @tree: The tree
 *
 * Return: the new node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
