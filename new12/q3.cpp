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
    string s;cin>>s;

    vector<vector<int>>v;

    for(int i=0;i<n;i++){
        int r=0,b=0,y=0;
        if(s[i]=='R' || s[i]=='O' || s[i]=='P' || s[i]=='A')r++;
        if(s[i]=='B' ||s[i]=='P' ||s[i]=='G' || s[i]=='A')b++;
        if(s[i]=='Y' ||s[i]=='O' ||s[i]=='G' || s[i]=='A')y++;

        vector<int>v1={r,b,y};
        v.push_back(v1);
    }


    int ans=0;

    int len=0;
    for(int i=0;i<n;i++){
        if(v[i][0]>0)len++;
        else{
            if(len!=0){
                ans++;
                len=0;
            }
        }
    }
    if(len!=0)ans++;
    len=0;
     
      for(int i=0;i<n;i++){
        if(v[i][1]==1)len++;
        else{
            if(len!=0){
                ans++;
                len=0;
            }
        }
    }
     if(len!=0)ans++;
    len=0;
     
      for(int i=0;i<n;i++){
        if(v[i][2]==1)len++;
        else{
            if(len!=0){
                ans++;
                len=0;
            }
        }
    }
    if(len!=0)ans++;

    cout <<ans<<endl;


}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    for(int i=1;i<=t;i++){
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}