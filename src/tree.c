#include "tree.h"
#include "C-LAB/matrix.h"

/* under construction

mondrian_tree initialize_tree(void) {
	mondrian_tree tree;
	tree.root = NULL;
	return tree;
}

void split_node(tree_node *parent, int split_dimension,
                      float split_location, float split_time) {
	tree_node *left_child = malloc(sizeof(tree_node));
	tree_node *right_child = malloc(sizeof(tree_node));
    parent->left_child = left_child;
    parent->right_child = right_child;
	parent->split_dimension = split_dimension;
	parent->split_location = split_location;
	parent->split_time = split_time;
}

void sample_mondrian_block(tree_node *j, matrix features, size_t min_samples_split) {
    lower_bounds[d] = min(features[d]);
    upper_bounds[d] = max(features[d]);
    spans = upper_bounds-lower_bounds;
    if () {
        lambda = sum(upper_bounds-lower_bounds);
        E = rand_exponential(lambda);
        j->split_time = j->parent->split_time+E;
        split_dimension = sample_from_distribution(spans);
        split_dimension = sample_uniform();
    } else {
        j->split_time = inf;
    }
}

*/
