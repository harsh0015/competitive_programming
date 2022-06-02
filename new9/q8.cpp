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

map<char,int>m;

for(int i=0;i<n;i++){
    m[s[i]]++;
}

int i=0,j=n-1;

while(1){
    if(m[s[i]]>1){
        m[s[i]]--;
        i++;
        continue;
    }
    if(m[s[j]]>1){
        m[s[j]]--;
        j--;
        continue;
    }
    break;
}

cout <<j-i+1<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}