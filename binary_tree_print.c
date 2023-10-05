#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
* print_t - the identfier for 
* @tree: the identfier for 
* @offset: the identfier for 
* @depth: the identfier for 
* @s: the identfier for 
*
* Return: the identfier for 
*/
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, is_left, yi;

	if (!tree)
		return (0);
	is_left = (tree->parent && tree->parent->left == tree);
	width = sprintf(b, "(%03d)", tree->n);
	left = print_t(tree->left, offset, depth + 1, s);
	right = print_t(tree->right, offset + left + width, depth + 1, s);
	for (yi = 0; yi < width; yi++)
		s[depth][offset + left + yi] = b[yi];
	if (depth && is_left)
	{
		for (yi = 0; yi < width + right; yi++)
			s[depth - 1][offset + left + width / 2 + yi] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (yi = 0; yi < left + width; yi++)
			s[depth - 1][offset - width / 2 + yi] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
* _height - fucntion for
* @tree: the identfier for 
* Return: the identfier for 
*/
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
* binary_tree_print - funtion for
* @tree: the tree
*/
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t height, yi, er;

	if (!tree)
		return;
	height = _height(tree);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (yi = 0; yi < height + 1; yi++)
	{
		s[yi] = malloc(sizeof(**s) * 255);
		if (!s[yi])
			return;
		memset(s[yi], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (yi = 0; yi < height + 1; yi++)
	{
		for (er = 254; er > 1; --er)
		{
			if (s[yi][er] != ' ')
				break;
			s[yi][er] = '\0';
		}
		printf("%s\n", s[yi]);
		free(s[yi]);
	}
	free(s);
}
