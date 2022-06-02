#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    int d=10000,sum=0,neg=0;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<0)
            {
                neg++;
            }
            d=min(d,abs(a[i][j]));
            sum=sum+abs(a[i][j]);
        }
    }
    if(neg%2!=0)
    {
        cout<<sum-(2*d)<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
}
 
 
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
 
}