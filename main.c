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
/*    int value;  declaring value for testing for the search operation*/

    root = NULL;

    root = insert(root,5);
    root = insert(root,3);
    root = insert(root,7);
    root = insert(root,4);
    root = insert(root,1);
    root = insert(root,9);
    root = insert(root,8);
    inorder(root);
    printf("\n");
/* Testing delete node Uncomment to test if the node is deleted
    root = delete_node(root, 3);
    printf("\n");
    inorder(root);
*/
/* Testing for search operation Uncomment this to test
    value = 8;
    if (search(root, value) == 1)
        printf("Value found\n");
    else
        printf("Value not found");
*/
    return (0);
}
