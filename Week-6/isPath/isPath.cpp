#include <bits/stdc++.h>
#include <stack>
#define MAX 20
using namespace std;

bool ispath(int **M, int V, int s, int d)
{
    stack<int> st;
    bool *visited = new bool[V]();

    st.push(s);
    visited[s] = 1;

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        for (int v = 0; v < V; ++v) {
            if (M[u][v] && v == d)
                return true;

            if (M[u][v] && !visited[v]) {
                st.push(v);
                visited[v] = 1;
            }
        }
    }

    return false;
}

int main()
{
    int n;
   // cout<<"enter size: \n";
    cin>>n;

    int **m;
    m=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    m[i]=(int *)malloc(n*sizeof(int));

   // cout<<"enter elements: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    int s,d;
    cin>>s>>d;

    if(ispath(m,n,s-1,d-1))
    cout<<"Path exists";
    else
    cout<<"No Path does not exist";

    return 0;
}









