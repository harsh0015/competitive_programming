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
 
 int n,k;cin>>n>>k;
 string s;cin>>s;
int i;
 for( i=1;i<s.length();i++){
    // cout <<s[i]-'a'<<" "<<s[0]-'a'<<endl;
    if(s[i]-'a'<s[0]-'a'){
        continue;
    }
   else if(s[0]-'a'<s[i]-'a'){
        break;
    }
    else{
        if(i==n-1)break;
         if(i==1){
            if(s[i+1]-'a'<=s[0]-'a')continue;
         }
        int r=1,p=i+1;
        bool flag=false;
        while(r<i && p<n){
       if(s[p]-'a'<s[r]-'a'){
        flag=true;
        break;
       }
        }
        if(flag)continue;
        else break;
    }
 }
string small=s.substr(0,i);
// cout <<small<<endl;

int l=small.length();

if(k<l){
    cout <<small.substr(0,k)<<endl;
    return;
}
else{
    for(int i=0;i<k/l;i++){
        cout <<small;
    }
    cout <<small.substr(0,k- l*(k/l));
    cout <<endl;
}

}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}