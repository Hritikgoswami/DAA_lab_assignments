#include <bits/stdc++.h>
using namespace std;

void FindSequence(int arr[],int n)
{
    for(int k=0;k<n;k++)
    {
        int l=0,r=n-1;
        while(l<r)
        {
            int sum=arr[l]+arr[r];
            if (sum==arr[k])
            {
                cout<<l+1<<", "<<r+1<<", "<<k+1<<endl;
                return;
            }
            else if (sum<arr[k])
                l++;
            else
                r--;
        }
    }
        cout<<"No Sequence found"<<endl;
        return;
}
int main()
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

        FindSequence(a,n);
    }
	return 0;
}









