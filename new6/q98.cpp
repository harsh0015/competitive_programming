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

 vector<int>v1,v2;

 for(int i=0;i<s.length();i++){
    if(s[i]=='(')v1.pb(i);
    // else v2.pb(i);
 }
 for(int i=s.length()-1;i>=0;i--){
    if(s[i]==')')v2.pb(i);
    // else v2.pb(i);
 }
if(v1.size()==0 ||v2.size()==0){
    cout <<0<<endl;
    return;
}
// for(int a=0;a<v1.size();a++)cout <<v1[a]<<" ";
// cout <<endl;
// for(int a=0;a<v2.size();a++)cout <<v2[a]<<" ";
// cout <<endl;
 int i=0,j=0;
 int count=0;
 while((v1[i]<v2[j] ) && i<v1.size()&&j<v2.size()){
   count=count+2;
   i++;j++;
 }
if(count>0)cout <<1<<endl;
 cout <<count<<endl;
 for(int k=0;k<i;k++)cout <<v1[k]+1<<" ";
    for(int k=j-1;k>=0;k--)cout <<v2[k]+1<<" ";
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