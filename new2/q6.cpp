#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define mod 1000000007
#define vll vector<ll>
#define pll vector<pair<ll,ll>>
 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	//cin>>t;
	t=1;
	start:
	while(t--){
 
	    string s;
	    cin>>s;
 
	    ll ans=1;
 
	    for(ll i=0;i<s.size();i++){
            if(s[i]=='m' || s[i]=='w'){
                cout<<"0"<<endl;
                return 0;
            }
	    }
	    ll c=0;
	    ll dp[s.size()]={0};
	    dp[0]=1;
	    if(s[0]==s[1] && (s[0]=='n' || s[0]=='u'))
            dp[1]=2;
        else dp[1]=1;
 
	    for(ll i=2;i<s.size();i++){
             dp[i]=dp[i-1];  
              if(s[i]==s[i-1] && (s[i-1]=='n' || s[i-1]=='u')){
                dp[i]=(dp[i]+dp[i-2])%mod;
              }
        }
 
      /*  for(ll i=0;i<s.size();i++)
            cout<<dp[i]<<" ";
        cout<<endl;*/
 
	    cout<<dp[s.size()-1]<<endl;
 
 
	}
	return 0;
}