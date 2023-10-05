#include "binary_trees.h"

/**
* compare_depth - identifier for
* @tree: identifier for
* Return: identifier for
*/

int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
* binary_tree_is_perfect - identifier for
* @tree: identifier for
* Return: 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lefty = 0, rghty = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	lefty = compare_depth(tree->left);
	rghty = compare_depth(tree->right);

	if ((lefty - rghty) == 0)
		return (1);

	return (0);
}
