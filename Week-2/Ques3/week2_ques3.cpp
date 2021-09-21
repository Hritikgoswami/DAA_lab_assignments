#include <bits/stdc++.h>
using namespace std;

void FindDiff(int arr[],int n,int k)
{
    int count = 0;
    sort(arr, arr+n);
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              count++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else
              r++;
    }
    cout<<"\n"<<count;
}

int main()
{
    int t,key;
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

       //  cout<<"\nEnter key:\n";
        cin>>key;

        FindDiff(a,n,key);
    }
	return 0;
}











