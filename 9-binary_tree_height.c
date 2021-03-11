#include "binary_trees.h"

/**
 *binary_tree_height -measures height of tree
 *@tree: pointer to the root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

		size_t lh = binary_tree_height(tree->left) + 1;
		size_t rh = binary_tree_height(tree->right) + 1;


		if (lh > rh)
			return (lh);

		else
			return (rh);
	}

}
