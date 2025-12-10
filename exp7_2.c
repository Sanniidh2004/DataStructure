#include <stdio.h>
#include <stdlib.h>

#define V 9
#define E 14  
struct Edge {
    int src, dest, weight;
};

struct subset {
    int parent, rank;
};

int find(struct subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(struct subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int compareEdges(const void* a, const void* b) {
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

void KruskalMST(struct Edge edges[]) {
    struct subset subsets[V];
    struct Edge result[V];
    int e = 0; 
    int i = 0;

    qsort(edges, E, sizeof(edges[0]), compareEdges);

    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    while (e < V - 1 && i < E) {
        struct Edge next_edge = edges[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        if (x != y) {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }

    printf("\nEdges in the Minimum Spanning Tree:\n");
    int totalCost = 0;
    for (i = 0; i < e; i++) {
        printf("%c - %c \t%d\n", result[i].src + 'a', result[i].dest + 'a', result[i].weight);
        totalCost += result[i].weight;
    }
    printf("\nSannidhi Deb\n 2330044\n\n");
    printf("\nTotal cost of MST with Kruskal's Algo = %d\n", totalCost);
}

int main() {
    struct Edge edges[E] = {
        {0,1,4}, {0,7,8}, {1,2,8}, {2,3,7}, {3,4,9}, {4,5,10},
        {3,5,14}, {2,5,4}, {2,8,2}, {7,8,7}, {7,6,1}, {6,5,2},
        {6,8,6}, {1,7,11}
    };

    KruskalMST(edges);
    return 0;
}
