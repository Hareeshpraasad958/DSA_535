#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int adj[MAX][MAX];
int n;

bool visited[MAX];

void dfs(int current,int adj[MAX][MAX],int v) {
    visited[current] = true;
    printf("%d ", current);

    for (int i = 0; i < v; i++) {
        if (adj[current][i] && !visited[i]) {
            dfs(i,adj,v);
        }
    }
}

int main() {
    int v=6;           //0,1,2,3,4,5
    int adj[MAX][MAX] ={{0,1,1,0,0,0},//0  // v*v
                        {1,0,0,1,0,0},//1
                        {1,0,0,0,1,0},//2
                        {0,1,0,0,1,1},//3
                        {0,0,1,1,0,1},//4
                        {0,0,0,1,1,0},//5
    };

    dfs(0,adj,v);


    return 0;
}
