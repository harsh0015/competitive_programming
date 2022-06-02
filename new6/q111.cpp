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
 
 ll n,m,i,j;cin>>n>>m>>i>>j;

 ll a,b,c,d;
 ll dis=-1;
 ll x,y,w,z;

 a=1;
 b=1;
 c=1;
 d=m;

 if(abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d) >dis){
    x=a;y=b;w=c;z=d;
    dis=abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d);
 }
a=1;
 b=1;
 c=n;
 d=1;
if(abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d) >dis){
    x=a;y=b;w=c;z=d;
    dis=abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d);
 }

 //
 a=1;
 b=1;
 c=n;
 d=m;
if(abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d) >dis){
    x=a;y=b;w=c;z=d;
    dis=abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d);
 }

 a=1;
 b=m;
 c=n;
 d=1;
if(abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d) >dis){
    x=a;y=b;w=c;z=d;
    dis=abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d);
 }

a=1;
 b=m;
 c=n;
 d=m;
if(abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d) >dis){
    x=a;y=b;w=c;z=d;
    dis=abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d);
 }

 a=n;
 b=1;
 c=n;
 d=m;
if(abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d) >dis){
    x=a;y=b;w=c;z=d;
    dis=abs(a-i)+abs(b-j)+abs(c-i)+abs(d-j)+abs(a-c)+abs(b-d);
 }
// cout <<dis<<endl;
 cout <<x<<" "<<y<<" "<<w<<" "<<z<<endl;

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