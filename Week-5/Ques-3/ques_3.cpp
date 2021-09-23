#include <iostream>
using namespace std;

int main(){
    int m,n,i,j;
    cin>>m;
    int a1[m];

    for(i=0;i<m;i++)
    {
        cin>>a1[i];
    }

    cin>>n;
    int a2[n];

    for(i=0;i<n;i++)
    {
        cin>>a2[i];
    }

    i=0,j=0;
    while(i<m && j<n)
    {
        if(a1[i]<a2[j])
            i++;
        else if(a1[i]>a2[j])
            j++;
        else
        {
            cout<<a1[i]<<" ";
            i++;
            j++;
        }
    }
    return 0;
}
