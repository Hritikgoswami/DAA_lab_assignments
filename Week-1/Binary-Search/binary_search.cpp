#include<iostream>
using namespace std;

int main ()
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

      //  cout<<"Enter the elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int key,itr=0,flag=0;
       // cout<<"\nEnter element to be searched\n";
        cin>>key;

            int left=0,right=n-1;

            while(left<=right)
            {

                int mid=left+(right-left)/2;

                itr++;
                if(a[mid]==key)
                {
                    flag=1;
                    break;
                }
                else if(key > a[mid])
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }

            }
            if(flag)
            cout<<"\nPresent "<<itr;
            else
            cout<<"\nNot Present "<<itr;
            cout<<"\n";
        }
    return 0;
}














