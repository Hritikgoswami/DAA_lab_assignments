#include<iostream>
using namespace std;

int main ()
{
    int t;
    cout<<"Enter the number of test-cases:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\nEnter the size of array: ";
        cin>>n;

        int a[n];

        cout<<"Enter the elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int key,i,loc;
        cout<<"\nEnter element to be searched\n";
        cin>>key;
        for (i=0;i<n;i++)
        {
            if(a[i] == key)
            {
                loc=i+1;
                break;
            }
            else
                loc=0;
        }
        if(loc!=0)
        {
            cout<<"\nPresent "<<i+1<<"\n";
        }
        else
        {
            cout<<"\nNot Present "<<n<<"\n";
        }
    }
    return 0;
}



















