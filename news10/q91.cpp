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

string fun(string s,int k){
    string ans="";

    int n=s.length();
    for(int i=0;i<k;i++){
        ans=ans+char(s[i%n]);
    }
    return ans;
}



 
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;

    vector<string>v;

    for(int i=1;i<=n;i++){
        v.push_back(fun(s.substr(0,i),k));
    }
    sort(v.begin(), v.end());
    cout <<v[0]<<endl;

}
 
 
int main(){
   ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    int t = 1;
    
   
    while(t--){
        solve();
    }
    return 0;
}