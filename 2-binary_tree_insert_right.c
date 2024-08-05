#include "binary_trees.h"
/**
 * binary_tree_insert_right - entry
 * @parent: --
 * @value: --
 * Return: --
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->left = NULL;
/* Si le parent a un droit, il devient le droit du nouveau nœud */
new_node->right = parent->right;
/* Le nouveau nœud devient l'enfant droit du parent */
parent->right = new_node;

return (new_node);
}
