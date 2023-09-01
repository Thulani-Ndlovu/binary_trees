#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with atleast one child
* in the binary tree
* @tree: pointer to the root node
* Return: number of nodes, or 0 if tree is null.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeCount = 0;

	if (tree != NULL)
	{
		nodeCount += (tree->right || tree->left) ? 1 : 0;
		nodeCount += binary_tree_nodes(tree->right);
		nodeCount += binary_tree_nodes(tree->left);
	}

	return (nodeCount);
}
