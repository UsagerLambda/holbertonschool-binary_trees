#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: A pointer to the created node, or NULL on failure or parent is NULL
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
/* new_node->right prend l'adresse de parent->right */
new_node->right = parent->right;
if (new_node->right != NULL) /* Vérif si parent avait un enfant droit */
	/* update parent de new_node->right vers new_node */
	new_node->right->parent = new_node;
/* set new_node comme enfant droit de parent */
parent->right = new_node; /* pos new_node comme enfant droit de parent */
new_node->parent = parent; /* le parent de new_node deviens parent */

return (new_node);
}
