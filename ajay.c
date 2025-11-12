#include <stdio.h>
#include <stdlib.h>

struct Node {
    int v;
    struct Node *next;
};

struct Node* adj[10];
int visited[10];

void addEdge(int u, int v) {
    struct Node* n = malloc(sizeof(struct Node));
    n->v = v; n->next = adj[u];
    adj[u] = n;
}

void DFS(int s) {
    struct Node* temp;
    visited[s] = 1;
    printf("%d ", s);
    for (temp = adj[s]; temp; temp = temp->next)
        if (!visited[temp->v])
            DFS(temp->v);
}

int main() {
    int n, e, u, v, start;
    printf("Enter vertices and edges: ");
    scanf("%d%d", &n, &e);

    for (int i = 0; i < e; i++) {
        scanf("%d%d", &u, &v);
        addEdge(u, v);
        addEdge(v, u); // undirected
    }

    printf("Enter start vertex: ");
    scanf("%d", &start);

    printf("DFS: ");
    DFS(start);
    return 0;
}
