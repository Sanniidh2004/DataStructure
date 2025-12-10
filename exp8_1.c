#include <stdio.h>
#define INF 999

void dijkstra(int n, int cost[10][10], int source) {
    int dist[10], visited[10], parent[10];
    int count, mindist, nextnode, i, j;

    for (i = 1; i <= n; i++) {
        dist[i] = cost[source][i];
        visited[i] = 0;
        parent[i] = source;
    }

    dist[source] = 0;
    visited[source] = 1;
    count = 1;

    while (count < n - 1) {
        mindist = INF;

        for (i = 1; i <= n; i++)
            if (dist[i] < mindist && !visited[i]) {
                mindist = dist[i];
                nextnode = i;
            }

        visited[nextnode] = 1;

        for (i = 1; i <= n; i++)
            if (!visited[i])
                if (mindist + cost[nextnode][i] < dist[i]) {
                    dist[i] = mindist + cost[nextnode][i];
                    parent[i] = nextnode;
                }

        count++;
    }
    printf("\nSannidhi Deb\n  2330044\n\n");    
    printf("\nSource\tDestination\tCost\tPath");
    for (i = 1; i <= n; i++) {
        if (i != source) {
            printf("\n%d\t%d\t\t%d\t%d", source, i, dist[i], i);
            j = i;
            while (j != source) {
                j = parent[j];
                printf("<-%d", j);
            }
        }
    }
    printf("\n");
}

int main() {
    int n = 5, source = 1;
    int cost[10][10] = {
        {0,0,0,0,0,0},
        {0,0,10,INF,5,INF},
        {0,INF,0,1,2,INF},
        {0,INF,INF,0,INF,4},
        {0,INF,3,9,0,2},
        {0,INF,INF,6,INF,0}
    };

    dijkstra(n, cost, source);
    return 0;
}
