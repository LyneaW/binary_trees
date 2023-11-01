#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: Pointer to the parent node
* @value: value to input
* Return: pointer to the created node or NULL if it  fails
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent)
{
binary_tree_t *new = binary_tree_node(parent, value);

if (!new)
return (NULL);

if (parent->left)
{
new->left = parent->left;
new->left->parent = new;
}

parent->left = new;

return (new);
}

return (NULL);
}
