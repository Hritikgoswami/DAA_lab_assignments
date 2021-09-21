#include <bits/stdc++.h>
using namespace std;

void binary_recursive(int arr[], int l, int r, int x ,int itr)
{
	if (r >= l)
    {
        itr++;
		int mid=l+(r-l)/ 2;
		if (arr[mid]==x)
        {
         cout<<"\nPresent "<<itr;
         return;
        }
		if (arr[mid] > x)
			return binary_recursive(arr,l,mid-1,x,itr);

		return binary_recursive(arr,mid+1,r,x,itr);
	}
	cout<<"\nNot Present "<<itr;
}

int main()
{
    int t;
    //cout<<"Enter the number of test-cases:";
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

        int itr=0;
        binary_recursive(a,0,n-1,key,itr);
    }
	return 0;
}















