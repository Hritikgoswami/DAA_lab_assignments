#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char a[n];
        int freq[26]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            freq[a[i]-'a']++;
        }
        int max=0, e;
        for(int i=0;i<n;i++)
        {
            if(max<freq[i])
            {
                max=freq[i];
                e=i;
            }
        }
        if(max > 1)
        cout<<(char)(e+97)<<"-"<<max<<endl;
        else
        cout<<"No Duplicates Found"<<endl;
    }
    return 0;
}

