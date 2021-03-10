#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node to the left child
 *@parent : pointer to node to insert on the left
 *@value : int to be put on new node
 *Return: the returning node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);

	if (!(new_node))
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->right = NULL;

	parent->right = new_node;

	return (new_node);
}
