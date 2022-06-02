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

    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];


    string s="";

   ll x=arr[0];
   int len=0;
   while(x){
    len++;x=x/10;
   }
   int carry=0;
   for(int j=0;j<len;j++){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ 2*(arr[i]%10);
        arr[i]=arr[i]/10;
   } 
   int y=sum%10;
   carry=carry+sum/10;
   s= char(y+'0')+s;

   }

 while(carry){
    int y=carry%10;
    s= char(y+'0')+s;
    carry=carry/10;
 }
   
cout <<s<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
  
   
    while(t--){
        solve();
    }
    return 0;
}