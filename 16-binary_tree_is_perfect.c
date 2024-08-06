#include "binary_trees.h"
/**
 * height - Computes the height of a node in a binary tree
 * @node: Pointer to the node
 * Return: The height of the node
 */
size_t height(binary_tree_t *node)
{
	size_t left_height, right_height;

	if (node == NULL)
	return (0);

	left_height = height(node->left); /* calc la hauteurs des enfants gauches */
	right_height = height(node->right); /* calc la hauteurs des enfants droits */

/* si la branche left_height est plus haute que right */
	if (left_height > right_height)
	/* return height de left_height + 1 (node de départ)*/
	return (1 + left_height);
	else /* si right_height > left_right */
	return (1 + right_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

/* Call la fonction height pour calc la hauteur max de left et right du node */
left_height = height(tree->left);
right_height = height(tree->right);

if (left_height == right_height)
return (1);
else
return (0);
}
