#include "binary_trees.h"
/**
 * depth - Calcul the depth of the node
 * @node: Pointer to the node
 * Return: The depth of the node
 * Description: We need to know the max depth of the tree from the given node
 */
int depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node != NULL) /* parcours node vers la gauche */
	{
	depth++; /* incrémente à chaque node */
	node = node->left; /* passe au node enfant gauche du node actuel */
	}
	return (depth);
}

/**
 * is_perfect - Check if the node is perfect
 * @tree: pointer to the node to check
 * @depth: value of one of the under-branch to check with the level value
 * @level: Actual level in the node
 * Return: 1 if is perfect, 0 if it's not
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
if (tree == NULL) /* si tree == NULL, tree est parfait */
return (1);

/* si le tree actuel n'as pas d'enfants */
/* (donc parfait si toutes les feuilles sont au même niveau) */
if (tree->left == NULL && tree->right == NULL)
return (depth == level + 1);

/* si tree à un enfant mais pas l'autre / donc pas parfait */
if (tree->left == NULL || tree->right == NULL)
return (0);

/* Les deux appels récursifs se déplacent dans leurs sous-arbres respectifs*/
/* en incrémentant level chaque fois que l'ont déscend d'un niveau */
/* puis le comparateur && vérifie si les deux branche sont parfaite */
return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Check if the given node is perfect
 * @tree: Pointer to the root node
 * Return: 1 if the node is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d;
if (tree == NULL)
return (0);
/* Call depth avec le node à calc puis assigne la valeur retournée à d */
d = depth(tree);
/* appelle is_perfect avec le node actuel la profondeur de celui-ci */
/* et sont niveau est set à 0 */
return (is_perfect(tree, d, 0));
}
