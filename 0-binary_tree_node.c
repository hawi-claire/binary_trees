#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: Pointer to the parent node
 * @value: Pointer to the new node
 *
 * Return: NULL - If an error occurs
 *         Else - Pointer to the new node.
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/* Allocate memory for th enew node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		/*Handle memory allocation failure*/
		return (NULL);
	/* Set the node's values*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	
	return (new_node);
}
