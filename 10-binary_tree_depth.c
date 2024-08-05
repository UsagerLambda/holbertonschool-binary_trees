#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: Depth of the node in the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

while (tree && tree->parent) /* boucle qui remonte vers la racine de l'arbre */
{
tree = tree->parent;
depth++;
}

return (depth);
}
