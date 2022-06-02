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

void solve(){
 ll n,k;cin>>n>>k;
bool flag=true;
ll count=0;
 while(flag && count<n){

    if(count==0){
cout <<count<<endl;
   cout.flush();
    }
    else{
        cout<<myXOR(count-1,count)<<endl;
        cout.flush();
    }
   

   ll x;
   cin>>x;

   if(x==1){
    flag=false;
    break;}

   else {
   
   count++;
   }
 }
if(!flag){
    return;
}


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