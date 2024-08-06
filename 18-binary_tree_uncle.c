#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle of
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 * info - The uncle is the brother of the parent of the current node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *parent, *grandparent;

/* vérif si le node, son parent, son grand-parent est NULL */
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL); /* si oui retourne NULL car l'oncle n'existe pas */

/* initialise parent comme parent du node actuel */
parent = node->parent;
/* initialise grandparent comme parent de parent */
grandparent = parent->parent;

/* vérifie si parent se trouve à gauche de grandparent */
if (grandparent->left == parent) /* si oui retourne le node de droite */
	return (grandparent->right);
else /* vérifie si parent se trouve à droite de grandparent */
	return (grandparent->left); /* si oui retourne le node de gauche */
}
