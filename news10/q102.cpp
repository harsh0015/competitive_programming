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

ll dp[20][2];

ll cnt(string num,int n,bool tight){

    if(tight==0)return (pow(10,n)+0.1);

    if(n==0)return 1;

    ll ans=0;

    int ub= tight? num[num.length()-n]-'0':9;

    for(int i=0;i<=ub;i++){
        ans=ans+ cnt(num,n-1,tight&(i==ub));
    }
    return ans;

}
ll counter(string num,int n,bool tight){

    if(n==0)return 0;

    if(dp[n][tight]!=-1)return dp[n][tight];

    int ub= tight ? num[num.length()-n]-'0':9;

    ll ans=0;

    for(int i=0;i<=ub;i++){
        ans=ans+ (i*cnt(num,n-1,tight&(i==ub)));
        ans=ans+ counter(num,n-1,(tight&(i==ub)));
    }

    return dp[n][tight]=ans;
}

 
void solve(){

    ll L,R;cin>>L>>R;
    
    L--;
    string l,r;
   
    l=to_string(L);
   
     r=to_string(R);
   
     memset(dp,-1,sizeof dp);
    ll fl=counter(l,l.length(),1);
     memset(dp,-1,sizeof dp);
    ll fr=counter(r,r.length(),1);

    cout <<fr-fl<<endl;

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