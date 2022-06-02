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

string ans1="";
string ans2="";

bool flag=false;

for(int i=0;i<n;i++){
    if(s[i]=='0'){
        ans1=ans1+"0";
        ans2=ans2+"0";
        continue;
    }

    if(!flag && s[i]=='1'){
        flag=true;
        ans1=ans1+'1';
        ans2=ans2+'0';
        continue;
    }

    if(!flag && s[i]=='2'){
        ans1=ans1+"1";
        ans2=ans2+"1";
        continue;
    }

    if(flag && s[i]=='2'){
 ans1=ans1+"0";
        ans2=ans2+"2";
        continue;
    }
    if(flag && s[i]=='1'){
         ans1=ans1+"0";
        ans2=ans2+"1";
        continue;
    }
}

cout <<ans1<<endl;
cout<<ans2<<endl;
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