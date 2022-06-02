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


 
void solve(){

    ll n;cin>>n;
    ll a=0,b=0;
    ll h=n;
   

     ll len=0;
     while(h){
        len++;
        h=h/10;
     }
     ll arr[len];
     h=n;
     ll i=len-1;
     while(h){
        arr[i]=h%10;
        h=h/10;
        i--;

     }

     for(ll i=0;i<len;i++){
        if(i%2==0)a=10*a+arr[i];
        else b=10*b+arr[i];
     }
     
   cout <<(a+1)*(b+1)-2<<endl;

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