#include<iostream>
#include<cmath>
using namespace std;

void jumpSearch(int arr[], int x, int n,int itr)
{
    int step=sqrt(n);
    int prev=0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        itr++;
        if (prev >= n)
            return;
    }
    while (arr[prev] < x)
    {
        prev++;
        itr++;
        if (prev == min(step, n))
            return;
    }
    if (arr[prev] == x)
    {
         itr++;
         cout<<"\nPresent "<<itr;
    }
    else
     cout<<"\nNot Present "<<itr;
     cout<<"\n";

    return;
}

int main ()
{
    int t;
  //  cout<<"Enter the number of test-cases:";
    cin>>t;
    while(t--)
    {
        int n;
      //  cout<<"\nEnter the size of array: ";
        cin>>n;

        int a[n];

      //  cout<<"Enter the elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int key;
      //  cout<<"\nEnter element to be searched\n";
        cin>>key;

        int itr=0;
        jumpSearch(a,key,n,itr);

    }
    return 0;
}





