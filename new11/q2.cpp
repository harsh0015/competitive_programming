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

    string s;cin>>s;
    int n=s.length();

    if(n<3){
        cout <<"YES"<<endl;
        return;
    }

    bool flag=true;


    for(int i=2;i<n;i++){
        // cout <<s[i]-'a'<<" "<<s[i-1]-'a'<<" "<<s[i-2]-'a'<<endl;
        if(int(s[i]-'A')!=(int(s[i-1]-'A')  + int(s[i-2]-'A' ))%26)flag=false;
    }

    if(flag)cout <<"YES";
    else cout <<"NO";

}
 
 
int main(){
    fastio;
 
    int t = 1;
    
   
    while(t--){
        solve();
    }
    return 0;
}