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
 int n,m;cin>>n>>m;

 vector<string>v1,v2;

 for(int i=0;i<n;i++){
    string s;cin>>s;
    v1.push_back(s);
 }
  for(int i=0;i<n-1;i++){
    string s;cin>>s;
    v2.push_back(s);
 }

int arr[26];
string ans="";

for(int i=0;i<26;i++)arr[i]=0;

 for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
    arr[v1[j][i]-'a']++;
   }

   for(int j=0;j<n-1;j++){
     arr[v2[j][i]-'a']--;
   }

for(int i=0;i<26;i++){
    if(arr[i]>0){
        ans=ans+ char('a'+i);

    }
}

for(int i=0;i<26;i++)arr[i]=0;
 }

cout <<ans<<endl;
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