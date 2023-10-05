#include "binary_trees.h"

/**
* binary_tree_is_root - identifier for
* @node: identifier for
* Return: identifier for
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
