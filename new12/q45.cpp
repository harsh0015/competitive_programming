#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<long long int>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}
 
 ///
void solve(){
     
     int n,m,k;cin>>n>>m>>k;
     int arr[n][m];

     rep(i,0,n)
     rep(j,0,m){
        cin>>arr[i][j];
     }

     vector<int>v(m,0);

     rep(j,0,m){
      int count=0;
        rep(i,0,n){
           if(arr[i][j]==2)count++;
       }
       v[j]=count;
       }
    
     while(k--){
        int x;cin>>x;
        x--;
        
        if(v[x]==n){
            cout <<x+1<<" ";
         continue;
        }

        int i=0,j=x;
        while(i<n && j>=0 && j<m){
            if(arr[i][j]==2){
                i++;
            }
            else if(arr[i][j]==1){
                arr[i][j]=2;
                v[j]++;
                j++;
            }
            else{
                 arr[i][j]=2;
                v[j]++;
                j--;
            }
        }
        cout <<j+1<<" ";
  
     }
       


}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
   
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}