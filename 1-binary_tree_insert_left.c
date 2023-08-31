#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in new node
 * Return: pointer to the new node, otherwise NULL if parent is null or failure to allocate new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	
	if (parent == NULL)
		return (NULL);
	
	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->n = value;
		newNode->right = NULL;
		parent->left->parent = newNode; 
		
		return (newNode);
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	parent->left = newNode;



	return (newNode);
}
