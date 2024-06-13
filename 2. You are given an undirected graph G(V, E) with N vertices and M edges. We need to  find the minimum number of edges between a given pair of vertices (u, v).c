#include <stdio.h>

#define MAX_VERTICES 1000
#define MAX_EDGES 1000

int graph[MAX_VERTICES][MAX_VERTICES];
int N, M;

void initializeGraph() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            graph[i][j] = 0;
        }
    }
}

int minEdgesBetweenVertices(int u, int v) {
    return graph[u][v];
}

int main() {
    int u, v;
    // Input N, M, and the graph edges
    scanf("%d %d", &N, &M);
    
    initializeGraph();
    
    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1; // Since it's an undirected graph
    }
    
    // Input the pair of vertices (u, v)
    scanf("%d %d", &u, &v);
    
    int minEdges = minEdgesBetweenVertices(u, v);
    
    printf("Minimum number of edges between %d and %d: %d\n", u, v, minEdges);
    
    return 0;
}
