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

ll myXOR(ll x, ll y)
{
    ll res = 0; // Initialize result
     
    // Assuming 32-bit Integer
    for (ll i = 31; i >= 0; i--)                    
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);
        
        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);         
 
        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}


ll conv(ll n ,ll l){

   vector<ll>v1;

   while(n>0){
    v1.push_back(n%2);
    n=n/2;
   }
   vector<ll>v2;

   while(l>0){
    v2.push_back(l%2);
    l=l/2;
   }

   int x=v1.size(),b=v2.size();
  ll a=b-x;

    while(a>0){
    v1.push_back(0);
    a--;
   }

   
   vector<ll>ans;

   for(ll i=0;i<v2.size();i++){
    if(v2[i]==1){
        if(v1[i]==1)ans.push_back(0);
        else ans.push_back(1);
    }
    else ans.push_back(0);
   }

ll an=0;
ll cn=1;

for(ll i=0;i<ans.size();i++){
    an=an + cn*ans[i];
    cn=cn*2;
}
return an;
   return 1;
}

void solve(){

 ll n;cin>>n;
 ll arr[n];

 for(ll i=0;i<n;i++)cin>>arr[i];

    vector<ll>ans;
     ll last=arr[0];

     ans.push_back(0);

    for(int i=1;i<n;i++){
        ans.push_back(conv(arr[i],last));
        // int y=conv(arr[i],last);

        last=myXOR(ans[i],arr[i]);
    }

  for(int i=0;i<ans.size();i++)cout <<ans[i]<<" ";

    cout <<endl;

}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}