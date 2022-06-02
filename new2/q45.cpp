#include<bits/stdc++.h>
#define rep0 for(int i=0;i<n;i++)
#define rep1 for(int i=1;i<=n;i++)
#define pb push_back
#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast
    ll t=0;cin>>t;while(t--){
        ll a=0,b=0; cin>>a>>b;
        ll ans=INT_MAX;
        ll count=0;ll c=0;
        for(int i=0;i*i<=a;i++) {
            if(b==1 && i==0)  continue;
            count=i;
            c=a;
            while(c) {c/=(b+i),count++;}
            ans=min(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}