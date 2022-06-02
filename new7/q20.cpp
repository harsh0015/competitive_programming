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
 ll l,m,n;
 cin>>l>>m>>n;

 // ll x=min(a/3,min(b/2,c/2));

 // a=a-x*3;
 // b=b-x*2;
 // c=c-x*2;

 string s="abcacba";

 ll ans=0;

 for(ll i=0;i<7;i++){
    ll a=l,b=m,c=n;
  ll count=0;
  ll count1=0;

  for(ll j=i;j<7;j++){
    if(s[j]=='a'){
        if(a!=0){
            count++;
            a--;
            continue;
        }
        else{
            ans=max(ans,count);
            break;
        }
    }
     if(s[j]=='b'){
        if(b!=0){
            count++;
            b--;
            continue;
        }
        else{
            ans=max(ans,count);
            break;
        }
    }
     if(s[j]=='c'){
        if(c!=0){
            count++;
            c--;
            continue;
        }
        else{
            ans=max(ans,count);
            break;
        }
    }
  }


 ll x=min(a/3,min(b/2,c/2));
a=a-x*3;
 b=b-x*2;
 c=c-x*2;

 for(ll k=0;k<7;k++){
     if(s[k]=='a'){
        if(a!=0){
            count1++;
            a--;
            continue;
        }
        else{
            // ans=max(ans,count);
            break;
        }
    }
     if(s[k]=='b'){
        if(b!=0){
            count1++;
            b--;
            continue;
        }
        else{
            // ans=max(ans,count);
            break;
        }
    }
     if(s[k]=='c'){
        if(c!=0){
            count1++;
            c--;
            continue;
        }
        else{
            // ans=max(ans,count);
            break;
        }
 }

 }
 ans=max(ans,x*7+count+count1);
 
}

cout <<ans<<endl;

}//end


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}