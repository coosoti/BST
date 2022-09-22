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

/* Inorder traversal function */
void inorder(bst_t *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* Inserting data into BST */
bst_t *insert(bst_t *root, int data)
{
    if (root == NULL)
        root = create_new_node(data);

    /* if data to be inserted is less than the root, insert in the left subtree */
    else if(data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

/* Search an element from BST */
int search(bst_t *root, int data)
{
    if (root == NULL)
        return 0;
    else if(root->data == data)
        return 1;
    else if(data <= root->data)
        return search(root->left,data);
    else
        return search(root->right,data);
}
