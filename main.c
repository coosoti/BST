#include <stdio.h>
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
    int value;

    root = NULL;

    root = insert(root,5);
    root = insert(root,3);
    root = insert(root,7);
    root = insert(root,4);
    root = insert(root,1);
    root = insert(root,9);

    inorder(root);
    printf("\n");
    value = 11;
    if (search(root, value) == 1)
        printf("Value found\n");
    else
        printf("Value not found");
    return (0);
}
