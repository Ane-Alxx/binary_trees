#include "binary_trees.h"

/**
* binary_tree_insert_left -  identifier for
* @parent:  identifier for
* @value:  identifier for
* Return:  identifier for
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_i = NULL, *new_node = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	left_i = parent->left;
	parent->left = new_node;

	if (left_i)
	{
		left_i->parent = new_node;
		new_node->left = left_i;
	}

	return (new_node);
}
