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

    ll n,k;cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n*n;i++){
        ll x;cin>>x;
        v.push_back(x);
    }

   sort(v.begin(), v.end());

   if(n==1){
    if(v[0]<=k)
     cout <<v[0]<<endl;
    else cout <<-1<<endl;
    
    return;
   }

   if(k==100000000000000){
    ll x=ceel(n+1,2);

   ll ans=v[(x-1)*n];

   cout <<ans<<endl;
   return;
   }

   ll x=ceel(n+1,2);
   bool flag=false;
   ll ans=-1;
   
   for(ll i=x-1;i<(n*n-(x-1)*n);i++){
     ll buffer=i-(x-1);
     ll sum=v[i];

     ll no=1;

     if(buffer%(x-1)==0){
       ll j=i+1;
       ll y=buffer/(x-1);
       if(y==0)j=i;
       while(y && j<n*n && no<n){
        sum=sum+v[j];
        no++;
        j++;
        y--;
       }
       if(buffer/(x-1)!=0)j--;
       j=j+x;
       while(no<n && j<n*n){
         sum=sum+v[j];
         j=j+x;
         no++;
       }

       if(no==n){
        if(sum<=k)ans=max(ans,v[i]);
       }
     }
     else{
        ll j=i+1;
    ll y=buffer/(x-1);
    if(y==0)j=i;
       while(y && j<n*n && no<n){
        sum=sum+v[j];
        no++;
        j++;
        y--;
       }
       if(buffer/(x-1)!=0)j--;
       ll h=buffer%(x-1);
       j=j+x-h;

       //
       while(no<n && j<n*n){
         sum=sum+v[j];
         j=j+x;
         no++;
       }


       if(no==n ){
        if(sum<=k)ans=max(ans,v[i]);
       }

     }

   }

   if(ans!=-1)cout<<ans<<endl;
   else cout <<-1<<endl;;

}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}