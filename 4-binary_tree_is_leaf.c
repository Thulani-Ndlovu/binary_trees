#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: pointer to the node to check
* Return: 1 if node is a leaf, 0 otherwise
* if node is NULL also return 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->right != NULL)
		return (0);
	else if (node->left != NULL)
		return (0);

	return (1);
}
