#ifndef DZ2_ACTIONS_H
#define DZ2_ACTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NODES 100

struct graph {
    int nodes[MAX_NODES][MAX_NODES];
    int num_nodes;
};
void read_graph(FILE* file, struct graph* g);
void write_dot(FILE* file, struct graph* g);

#endif //DZ2_ACTIONS_H
