#include "binary_trees.h"

/**
* binary_tree_height - identifier for
* @tree: identifier for
* Return: identifier for
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t zhong = 0, gng = 0;

	if (!tree)
		return (0);

	if (tree->left)
		zhong = 1 + binary_tree_height(tree->left);
	if (tree->right)
		gng = 1 + binary_tree_height(tree->right);

	if (zhong > gng)
		return (zhong);
	return (gng);
}
