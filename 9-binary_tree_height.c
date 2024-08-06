#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary
 * @tree: pointer to the root node tonmeasure height
 * Return: tree is NULL return 0 else return height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_left = 0;
	size_t l_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left)
		l_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		l_right = binary_tree_height(tree->right) + 1;

	if (l_left > l_right)
	{
		return (l_left);
	}
	else
	{
		return (l_right);
	}
}
