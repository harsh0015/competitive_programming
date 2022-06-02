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

    ll low=1;
    ll high=n;

    ll ans=n;

    if(n<=10){
        cout <<1<<endl;
        return;
    }
  


    while(low<=high){
    
     ll mid=(low+high)/2;

     ll sum1=0;
     ll sum2=0;
     ll cand=n;
 
     while(cand){
       
         sum1=sum1+min(cand,mid);
         cand=cand-min(cand,mid);
         sum2=sum2+ cand/10;
         cand=cand- (cand/10);
     }

    

     if(sum1>= (n/2) + (n%2)){
        ans=min(ans,mid);
       high=mid-1;
     }
     else low=mid+1;

    }

    cout <<ans<<endl;

}
 

 
int main(){
    fastio;
 
    int t = 1;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}