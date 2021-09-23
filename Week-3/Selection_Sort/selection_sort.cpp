#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    int s=0,cmp=0;
    for (int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            cmp++;
            if(arr[j]<arr[min])
                min=j;
        }
        int t=arr[min];
        arr[min]=arr[i];
        arr[i]=t;
        s++;
    }

        for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
        cout <<"comparisons= "<<cmp;
        cout <<"\nswaps= " <<s;
        cout << endl;
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

        selection_sort(a,n);
    }
    return 0;
}
