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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

/* Call la fonction height pour calc la hauteur max de left et right du node */
left_height = height(tree->left);
right_height = height(tree->right);

/* calc le fact d'équilibre en - la hauteur des sous-branches left et right */
return ((int)left_height - right_height);
/* (int) convertie les variables de type size_t en int */
}

/*
 * Facteur d’équilibre = Height sous-arbre gauche - Height sous-arbre droit
 */
