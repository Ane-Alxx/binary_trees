#include "binary_trees.h"

/**
* binary_tree_size - identifier for
* @binary_tree_t: identifier for
* @tree: identifier forL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t yi = 1;

	if (!tree)
		return (0);

	yi += binary_tree_size(tree->left);
	yi += binary_tree_size(tree->right);

	return (yi);
}
