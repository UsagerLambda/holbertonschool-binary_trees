#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent if NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
