#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @data: Integer stored in the node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int data;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;

void binary_tree_print(const binary_tree_t *);
bst_t *create_new_node(int data);
void inorder(bst_t *root);
bst_t *insert(bst_t *root, int data);
int search(bst_t *root, int data);

#endif /* _BINARY_TREES_H_ */
