#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];   
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for (int i=0;i<n;i++)
        {
            
            if ((int)sqrt(a[i])*(int)sqrt(a[i])!=a[i])
            {
                cout<<"YES"<<endl;
                break;
            }
            if (i==n-1)cout<<"NO"<<endl;
        }
    }
    return 0;
}