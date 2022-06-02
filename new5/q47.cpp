#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],b[n]={0};
        for(int i=0;i<n;i++)
        cin>>a[i];
        ll h=a[0],ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]-a[i+1]>0)
            ans+=a[i]-a[i+1];
        }    
        
        cout<<ans<<"\n";
    }
    return 0;
}