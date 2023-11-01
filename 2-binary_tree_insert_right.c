#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the parent node
* @value: value to input
* Return: pointer to the created node or NULL if it fails
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent)
{
binary_tree_t *new = binary_tree_node(parent, value);

if (!new)
return (NULL);

if (parent->right)
{
new->right = parent->right;
new->right->parent = new;
}

parent->right = new;

return (new);
}

return (NULL);
}
