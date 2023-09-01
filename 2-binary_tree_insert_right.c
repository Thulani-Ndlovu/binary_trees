#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node at the right child.
* @parent: pointer to the parent node
* @value: new node value
* Return: Pointer to the new node or null if failure
* also null when parent is null.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
