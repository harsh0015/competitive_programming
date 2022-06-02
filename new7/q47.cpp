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

 int countL=0,countR=0;

 for(int i=0;i<n;i++){
    if(s[i]=='R')countR++;
    else countL++;
 }

 if(countL==n || countR==n){
    cout <<(n+2)/3<<endl;
    return;
 }
 int ans=0;

 int h=-1;
 for(int i=1;i<n;i++){
    if(s[i]!=s[i-1]){
        h=i;
        break;
    }
 }

 // cout <<"h: "<<h<<endl;
int j;
 int count=1;
 if(s[n-1]==s[0]){
 

  for( j=n-2;j>=0;j--){
    if(s[j]==s[j+1])count++;
    else break;
  }
 }
 else {
    j=n-1;
    count=0;
}
// cout <<"count: "<<count<<endl;
 ans=ans+(count+h)/3;

int y=1;
// cout <<h<<" "<<j<<endl;
for(int k=h+1;k<=j;k++){
    if(s[k]==s[k-1])y++;
    else {
        // cout <<k<<" "<<y<<endl;
        ans=ans+(y/3);
        y=1;
    }
}
ans=ans+(y/3);
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