#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;

ll closest(vector<ll> arr, ll n, ll x)
{
    ll res_l, res_r;  
  
   
    ll l = 0, r = n-1, diff = 100000000000000;
  
    
    while (r > l)
    {
       
       if (abs(arr[l] + arr[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - x);
       }
  
       
       if (arr[l] + arr[r] > x)
           r--;
       else 
           l++;
    }
  
    return diff;
}

 
void solve(){

    ll n;cin>>n;

    vector<ll>v(n);

    for(ll i=0;i<n;i++)cin>>v[i];

    sort(v.begin(), v.end());


    if(n==2){
        cout <<0<<endl;
        return;
    }
    if(n==3){
        ll u=min(v[1]-v[0],v[2]-v[1]);
        cout <<u<<endl;
        return;
    }

    ll ans=abs(v[n-1]-v[0] -(v[n-2]-v[1]));

    ll r=v[0]+v[n-1];

    vector<ll>v2;

    for(ll i=1;i<n-1;i++)v2.push_back(v[i]);

    ll t=closest(v2,n-2,r);
     
    cout <<min(t,ans)<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}