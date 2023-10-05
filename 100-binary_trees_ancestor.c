#include "binary_trees.h"

/**
* binary_trees_ancestor - identifier for
* @first: identifier for
* @second: identifier for
* Return: Pointer
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *di_yi, *di_er;

	for (di_yi = first; di_yi; di_yi = di_yi->parent)
		for (di_er = second; di_er; di_er = di_er->parent)
			if (di_yi == di_er)
				return ((binary_tree_t *)di_yi);
	return (NULL);
}
