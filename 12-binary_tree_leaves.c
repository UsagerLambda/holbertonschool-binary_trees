#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* if left and right is NULL we are a leaf then return 1 */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* récursion qui vérifie chaque branches avec les condition si dessus */
/* puis additionne le résultat des branches de gauches et de droites */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
