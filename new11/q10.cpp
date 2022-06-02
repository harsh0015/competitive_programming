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

    int n;cin>>n;

  int eg=0,b=0,og=0;

  for(int i=0;i<n;i++){
    string s;cin>>s;
    if(s.length()%2==1)og++;
     
     else{
        int c1=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='1')c1++;
        }
        if(c1%2==0)eg++;
        else b++;
     }
  }
    
    int ans=0;
    ans=og;

    if(b%2==0){
        cout <<ans+b+eg<<endl;
    }
    else{
        if(og>0){
            cout <<ans+b+eg<<endl;
        }
        else{
            cout <<ans+b+eg-1<<endl;
        }
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