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

ll dp[20][2][2][2];

ll counter(string num,ll n,bool even ,bool leading ,bool tight){

    if(n==0)return 1;

    if(dp[n][even][leading][tight]!=-1)return dp[n][even][leading][tight];

    if(even){
        vector<int> digs={0,2,4,6,8};

        int ub= tight ? (num[num.length()-n]-'0'):9;
        ll ans=0;

        for(int dig : digs){
            if(dig<=ub){
              ans=ans+ counter(num,n-1,0,leading,(tight&(dig==ub)));
            }
        }
        return ans;
    }
    else{
        ll ans=0;

        if(leading==1)
            ans=ans+counter(num,n-1,0,1,0);

         vector<int> digs={1,3,5,7,9};

        int ub= tight?num[num.length()-n]-'0':9;
        

        for(int dig : digs){
            if(dig<=ub){
              ans=ans+ counter(num,n-1,1,0,(tight&(dig==ub)));
            }
        }
        return dp[n][even][leading][tight]=ans;

    }
}

 
void solve(){
  
  ll L,R;cin>>L>>R;
  L--;

  string r=to_string(R);
  string l=to_string(L);

  memset(dp,-1,sizeof dp);
  ll fr=counter(r,r.length(),0,1,1);
  memset(dp,-1,sizeof dp);
  ll fl=counter(l, l.length() ,0,1,1);


 cout <<fr-fl<<endl;



}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    cout<<"Case #"<<i<<": ";
    solve();
   }
    return 0;
}