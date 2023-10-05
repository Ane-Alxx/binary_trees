#include "binary_trees.h"

/**
* binary_tree_leaves - identifier for
* @tree: identifier for
* Return: identifier for
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	leaf_count += binary_tree_leaves(tree->left);
	leaf_count += binary_tree_leaves(tree->right);

	return (leaf_count);
}
