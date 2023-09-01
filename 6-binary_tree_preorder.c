#include "binary_trees.h"

/**
* binary_tree_preorder - Binary pre-order traversal
* @tree: pointer to the root of the tree
* @func: pointer to the function that calls each node
* value of the node must be passed to func
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
