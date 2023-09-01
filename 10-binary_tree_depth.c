#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: pointer to the root of the tree
* Return: depth of the tree, otherwise 0 if tree is null
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
		return (1 + binary_tree_depth(tree->parent));

	return (0);
}
