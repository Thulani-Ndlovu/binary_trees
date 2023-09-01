#include "binary_trees.h"

/**
* binary_tree_size - measures the size of the binary tree
* @tree: pointer to the root of the binary tree
* Return: size of the tree, otherwise 0 if tree is null
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_ = 0;

	if (tree != NULL)
	{
		size_ += 1;
		size_ += binary_tree_size(tree->left);
		size_ += binary_tree_size(tree->right);
	}

	return (size_);
}
