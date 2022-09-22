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

    root = create_new_node(98);

    inorder(root);
    return (0);
}
