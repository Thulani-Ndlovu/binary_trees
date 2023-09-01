#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves of a binary tree
* @tree: pointer to the root of the binary tree
* Return: number of leaves, or 0 if tree is null
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_ = 0;

	if (tree != NULL)
	{
		leaves_ += (!tree->right && !tree->left) ? 1 : 0;
		leaves_ += binary_tree_leaves(tree->left);
		leaves_ += binary_tree_leaves(tree->right);
	}

	return (leaves_);
}
