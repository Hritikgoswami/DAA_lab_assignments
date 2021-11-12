#include<bits/stdc++.h>
using namespace std;

bool isBipartite(int **G, int V)
{
    queue<int> Q;
    int *color = new int[V]();
    int curr = 1;

    color[0] = curr;
    Q.push(0);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        if (G[u][u])
            return false;

        curr *= -1;

        for (int v = 0; v < V; ++v) {
            if (G[u][v] && color[v] == 0) {
                color[v] = curr;
                Q.push(v);
            }
            else if (G[u][v] && color[u] == color[v])
                return false;
        }
    }

    return true;
}
int main()
{
    int n,s,d;
    cin>>n;
    int **m;
    m=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    m[i]=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> m[i][j];

    if(isBipartite(m,n))
    cout<<"Bipartite";
    else
    cout<<"Not Bipartite";
}
