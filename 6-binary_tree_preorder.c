#include "binary_trees.h"
/**
 * binary_tree_preorder - NULL
 * @tree: pointer to the root of the binary tree to parcour
 * @func: function to call for each node with the value of the node in argument
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n); /* appelle la fonction avec la valeur de tree->n */
binary_tree_preorder(tree->left, func); /* parcours les enfants gauches ré*/
binary_tree_preorder(tree->right, func); /* parcours les enfants droits */
}
