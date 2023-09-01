#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root of the binary tree
* Return: Balance factor, or 0 if tree is null
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int balanceFactor = 0;

	if (tree != NULL)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}


	return (balanceFactor);
}
