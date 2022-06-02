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

string ans=s;

int i=0;

while(s[i]=='?'){
    i++;
}

for(int j=i+1;j<n;j++){
    if(ans[j]=='?'){
        if(ans[j-1]=='R')ans[j]='B';
        else ans[j]='R';
    }
}



if(i!=0){
    for(int j=i-1;j>=0;j--){
        if(ans[j]=='?'){
            if(ans[j+1]=='B')ans[j]='R';
            else ans[j]='B';
        }
    }
}

cout <<ans<<endl;

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