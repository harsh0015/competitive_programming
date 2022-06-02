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
    // cout <<"helo"<<endl;
 int n,k;cin>>n>>k;

 string s;cin>>s;

 int w=0;
 for(int i=0;i<n;i++){
    if(s[i]=='W')w++;
 }
 if(w==0){
    cout <<max(2*k-1,0)<<endl;
    return;
 }

w=w+k;
 if(w>=n){
    cout <<2*n -1<<endl;
    return;
 }



 vector<int>v;
int l=0;
for(int i=0;i<n;i++){
    if(s[i]=='L')l++;
    if(s[i]=='W'){
       
            v.push_back(l);
            l=0;
        
    }
}
if(l!=0)v.push_back(l);

if(s[0]=='L')v.erase(v.begin());

if(s[n-1]=='L')v.erase(v.begin()+v.size()-1);

sort(v.begin(), v.end());

int sum=0;
int i;
for( i=0;i<v.size();i++){
    if(sum+v[i]>k)break;

     sum=sum+v[i];
}
 

 int wl=v.size()-i;

 cout <<2*w-1-wl<<endl;
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        // cout <<"he"<<endl;
        solve();
    }
    return 0;
}