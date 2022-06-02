#include <bits/stdc++.h> 
using namespace std; 
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
const long long int mod=pow(10,9)+7;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int one=0,zero=0;
        for(int i=0;i<n;i++)
        {   
            cin>>a[i];
            if(a[i]==1)
                one++;
            else 
                zero++;
        }
        if(one<=n/2)
        {
            cout<<zero<<endl;
            for(int i=0;i<zero;i++)
                cout<<"0"<<" ";
            cout<<endl;
        }
        else if(zero<n/2)
        {
            if(one%2!=0)
                one-=1;
            cout<<one<<endl;
            for(int i=0;i<one;i++)
                cout<<"1"<<" ";
            cout<<endl;
        }
    }
    return 0;
}