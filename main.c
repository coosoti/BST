#include <stdlib.h>
#include "bst.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    bst_t *root;

    root = NULL;

    root = insert(root,5);
    root = insert(root,3);
    root = insert(root,7);
    root = insert(root,4);
    root = insert(root,1);
    root = insert(root,9);

    inorder(root);
    return (0);
}
