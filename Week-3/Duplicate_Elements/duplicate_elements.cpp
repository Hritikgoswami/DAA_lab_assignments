#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i])
            {cout<<"YES\n";return;}
    }
    cout<<"NO\n";
    return;
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

        Sort(a,n);
    }
    return 0;
}

