#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - delete the node
 * @tree: the Node
 * Return: NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
