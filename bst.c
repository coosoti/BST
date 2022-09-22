#include "bst.h"
#include <stddef.h>
#include <stdlib.h>

/* Create New Nodes */
bst_t *create_new_node(int data)
{
	bst_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

void inorder(bst_t *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
