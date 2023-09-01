#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root of the binary tree
* Return: Height of the tree, otherwise 0 if tree is nulll
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_ = 0, right_ = 0;

		right_ = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		left_ = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		return ((left_ > right_ ? left_ : right_));
	}
	return (0);
}
