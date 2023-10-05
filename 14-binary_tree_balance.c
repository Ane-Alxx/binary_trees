#include "binary_trees.h"

/**
* binary_tree_height_balance -identifier for
* @tree: identifier for
* Return: identifier for
*/

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t lefty = 0, rghty = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lefty = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		rghty = 1 + binary_tree_height_balance(tree->right);

	if (lefty > rghty)
		return (lefty);
	return (rghty);
}

/**
* binary_tree_balance - identifier for
* @tree: identifier for
* Return: identifier for
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lefty = 0, rghty = 0;

	if (!tree)
		return (0);
	if (tree->left)
		lefty = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		rghty = 1 + binary_tree_height_balance(tree->right);
	return (lefty - rghty);
}
