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

 int arr[n];
int ma=-1;
int ind;
 for(int i=0;i<n;i++){
    cin>>arr[i];

    if(arr[i]>ma){
        ma=arr[i];
        ind=i;
    }
 }
// cout <<"*"<<ind<<endl;
 
 for(int i=ind+1;i<n;i++){
   if(arr[i]>=arr[i-1]){
    if(arr[i-1]==0){
        cout <<"NO"<<endl;
        return;
    }
    else{
     arr[i]=arr[i-1]-1;
    }
   }
 }

 for(int i=ind-1;i>=0;i--){
   if(arr[i]>=arr[i+1]){
    if(arr[i+1]==0){
        cout <<"NO"<<endl;
        return;
    }
    else{
     arr[i]=arr[i+1]-1;
    }
   }
 }
cout <<"YES"<<endl;

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