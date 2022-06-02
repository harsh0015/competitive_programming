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

     
        if(n%2==0){
           
           cout <<3*(n/2)<<endl;
           return;
        }

        else{

        for(ll i=3;i<=sqrt(n);i=i+2){
              if(n%i==0){
                cout <<(i+1)*(n/i)<<endl;
                return;
              }
        }

        cout <<n+1<<endl;


        }


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