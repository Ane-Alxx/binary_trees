#include "binary_trees.h"

/**
* search_uncle - the identfier for 
* @node: the identfier for 
* Return: the identfier for 
*/
binary_tree_t *search_uncle(binary_tree_t *node)
{
	binary_tree_t *root_tree = NULL;

	if (!node || !(node->parent))
		return (NULL);
	root_tree = node->parent;
	/* check left or right uncle */
	if (root_tree->left && (root_tree->left != node))
		return (root_tree->left);
	else if (root_tree->right && (root_tree->right != node))
		return (root_tree->right);
	return (NULL);
}

/**
* binary_tree_uncle - function for bt uncle
* @node: a node
* Return: the node tree
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (search_uncle(node->parent));
}
