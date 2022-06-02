x#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;
 
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    ll ans = 0;
    vector<ll> v;
    for(int i=0;i<n;++i)
    {
        cin>>a[i]>>b[i];
        ans += -a[i];
        v.push_back(2*a[i]+b[i]);
    }
    sort(v.begin(),v.end(),greater<ll>());
    int cnt = 0;
    for(int i=0;i<n;++i)
    {
        ++cnt;
        ans += v[i];
        if(ans>0)
            break;
    }
    cout<<cnt<<"\n";
    return 0;
}