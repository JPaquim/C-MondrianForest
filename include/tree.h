#ifndef TREE_H
#define TREE_H

#include <stdlib.h>

typedef struct tree_node {
	struct tree_node *parent;
	struct tree_node *left_child;
	struct tree_node *right_child;
	int split_dimension;
	float split_location;
	float split_time;
} tree_node;

typedef struct {
	tree_node *root;
} mondrian_tree;

mondrian_tree initialize_tree(void);
void split_node(tree_node *parent, int split_dimension,
                      float split_location, float split_time);

#endif
