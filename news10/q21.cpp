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

     

     ll count1=0;
     ll count_1=0;
     ll countx=0;

     for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x==1)count1++;
        if(x==-1)count_1++;

        if(x!=0 && x!=1 && x!=-1){
            
            countx++;
     }

 }

       if(countx>1){
        cout <<0<<endl;
        return;
       }

       if(count_1!=0 && countx!=0){
        cout <<0<<endl;
        return;
       }

       if(count_1>1 && count1==0){
        cout <<0<<endl;
        return;
       }

      

       cout <<1<<endl;
     



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