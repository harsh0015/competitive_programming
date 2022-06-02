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
 int arr[26];
 for(int i=0;i<26;i++)arr[i]=0;
 for(int i=0;i<n;i++){
    string s;cin>>s;

    for(int j=0;j<s.length();j++){
        arr[s[j]-'a']++;
    }


 }

 bool flag =true;

 for(int i=0;i<26;i++){
    if(arr[i]%n!=0){
        flag=false;
        break;
    }
 }

if(flag)cout <<"YES"<<endl;
else cout <<"NO"<<endl;
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}