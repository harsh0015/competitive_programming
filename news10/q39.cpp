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


ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
 
    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

string conv(ll n){

    string ret="";
    for (ll i = 31; i >= 0; i--) {
        ll k = n >> i;
        if (k & 1)
            ret=ret+"1";
        else
            ret=ret+"0";
    }
  
    return ret;

}

 
void solve(){

    ll n;cin>>n;
    ll arr[2][n];

    for(ll i=0;i<n;i++)cin>>arr[0][i];

        for(ll i=0;i<n;i++)cin>>arr[1][i];

    string dp[2][n];

for(ll i=0;i<2;i++){
    for(ll j=0;j<n;j++){
        dp[i][j]=conv(arr[i][j]);
    }
}



string ans="";
ll count=0;
bool swapped[n];

for(ll i=0;i<n;i++)swapped[i]=false;


for(ll i=0;i<32;i++){
    bool flag=true;

    for(ll j=0;j<n;j++){
        if(dp[0][j][i]=='0' && dp[1][j][i]=='0')flag=false;
    }

    if(!flag){
        ans=ans+"0";
        continue;
    }
    else{
        bool flag2=true;

        for(ll j=0;j<n;j++){
            if(dp[0][j][i]=='1')continue;

            if(dp[1][j][i]=='1' && swapped[j])flag2=false;
        }

        if(!flag2){
            ans=ans+"0";
            continue;
        }



         for(ll j=0;j<n;j++){
        if(dp[0][j][i]=='1' ){
            continue;
        }
        else{
            
         swap(dp[0][j],dp[1][j]);
         count++;
            swapped[j]=true;
            }
          
          
        }

        ans=ans+"1";

    

 
    }


}



    cout <<binaryToDecimal(ans)<<" "<<count<<endl; 

    
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