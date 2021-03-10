#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent : pointer to the parent node of the node to create
 *@value : int to be put in the new node
 *Return: The returning node;


 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
 binary_tree_t *new_node;

 new_node = malloc(sizeof(binary_tree_t));
 if (!(new_node))
 return (NULL);
 new_node->n = value;
 new_node->parent = parent;
 new_node->left = new_node->right = NULL;
 return (new_node);
 }
 */

/**
  binary_tree_insert_left - inserts a node to the left child
  @parent : pointer to node to insert on the left
  @value : int to be put on new node
Return : pointer to new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!(new_node))
		return (NULL);
	new_node->n = value;
	new_node-> parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;

	parent->left = new_node;

	return (new_node);
}
