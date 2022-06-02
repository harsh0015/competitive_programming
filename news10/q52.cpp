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

    ll q;cin>>q;

    while(q--){

        ll k,n,a,b;cin>>k>>n>>a>>b;

       ll count;
       ll left;

       if(k%b==0){
        count=k/b-1;

        left=b;

        if(count>n){
            left=left+(count-n)*b;
            count=n;
        }
       }
       else{
        count=k/b;
        left=k%b;

        if(count>n){
            left=left+(count-n)*b;
            count=n;
        }
       }


       if(count<n){
        cout<<-1<<endl;
        continue;
       }

       ll count2=0;
       ll h=a-b;

       if(left<=h){
        cout <<0<<endl;
     continue;
       }
       else{
        if(left%h==0){
            count2=left/h-1;
        }
        else{
            count2=left/h;
        }

        cout <<min(n,count2)<<endl;
       }
    }



}
 
 
int main(){
    fastio;
 
    int t = 1;
    
   
    while(t--){
        solve();
    }
    return 0;
}