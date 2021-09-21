#include <bits/stdc++.h>
using namespace std;

int RightPos(int A[], int l, int r, int key)
{
    int m;
    while(r-l>1)
    {
        m=l+(r-l)/2;

        if(A[m]<=key)
            l=m;
        else
            r=m;
    }
    return l;
}
int LeftPos(int A[], int l, int r, int key)
{
    int m;
    while(r-l>1)
    {
        m=l+(r-l)/2;

        if(A[m]>= key)
            r=m;
        else
            l=m;
    }
    return r;
}
void CountOcc(int A[], int size, int key)
{

    int l=LeftPos(A, -1, size-1, key);
    int r=RightPos(A, 0, size, key);

    if((r-l)+1==0||(l==r && A[l]!=key))
         cout<<"\nKey not Present ";
    else
        cout<<key<<"-"<<(r-l+1)<<endl;
}

int main()
{
    int t;
   // cout<<"Enter the number of test-cases:";
    cin>>t;
    while(t--)
    {
        int n;
       // cout<<"\nEnter the size of array: ";
        cin>>n;

        int a[n];

       // cout<<"Enter the elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int key;
       // cout<<"\nEnter element to be searched\n";
        cin>>key;

        CountOcc(a,n,key);
    }
	return 0;
}









