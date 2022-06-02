#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,u,v;
        cin>>n>>u>>v;
        vector<ll>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll min1=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(i+1<=n && abs(a[i]-a[i+1])==1)
            {
                ll val=min(u,v);
                min1=min(val,min1);
            }
            else if(i+1<=n && abs(a[i]-a[i+1])>1)
            {
                min1=0;
                break;
            }
            else if(i+1<=n && abs(a[i]-a[i+1])==0)
            {
                ll val1=min(2*v,u+v);
                min1=min(min1,val1);
 
            }
            else
            {
                break;
            }
        }
        cout<<min1<<endl;
    }
    return 0;
 
}