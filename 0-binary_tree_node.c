#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - create a new node
 * @value: the value pass to the fanction to set new node n
 * @parent: the parent node
 * Return: NewNode
 * NewNode - the NewNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		NewNode->parent = NULL;
		NewNode->n = value;
	}
	NewNode->parent = parent;
	NewNode->n = value;
	return (NewNode);
}
