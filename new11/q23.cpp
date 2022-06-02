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

// set<ll> prime(ll n){

//     set<ll>st;
//       while (n % 2 == 0)
//     {
//         st.insert(2);
//         n = n/2;
//     }
 
    
//     for (ll i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             st.insert(i);
//             n = n/i;
//         }
//     }
 
//     if (n > 2)
//         st.insert(n);

//     return st;
// }
 
void solve(){

    ll a,b;cin>>a>>b;


   set<ll>check=prime(a);
   
   for(auto i: check)cout <<i<<" ";
    

    for(auto i:check){
        if(b%i!=0){
            cout <<"NO"<<endl;
            return;
        }

    }

    cout<<"YES"<<endl;

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