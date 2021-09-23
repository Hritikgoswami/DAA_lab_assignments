#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, key, j, s=0,cmp=0;
    for (i=1;i<n;i++)
    {
        key=arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
            cmp++;
            s++;
        }
        arr[j + 1] = key;
        s++;
    }

        for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
        cout <<"comparisons= "<<cmp;
        cout <<"\nshifts= " <<s;
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

        insertion_sort(a,n);

    }
    return 0;
}
