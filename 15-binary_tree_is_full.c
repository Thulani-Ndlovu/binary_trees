#include "binary_trees.h"

/**
* fullRecursion - uses recursion to check if the tree is full
* @tree: pointer to the root of the tree
* Return: 0 if tree is full, otherwise 0
*/

int fullRecursion(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && tree->right))
			return (0);
		if ((!tree->left && !tree->right))
			return (0);
		if (!fullRecursion(tree->right))
			return (0);
		if (!fullRecursion(tree->left))
			return (0);
	}

	return (1);
}
/**
* binary_tree_is_full - checks if the binary tree is full
* @tree: pointer to the tree
* Return: 0 if tree is null.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (fullRecursion(tree));

	return (0);
