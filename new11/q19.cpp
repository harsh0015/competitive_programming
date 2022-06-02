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
    for(int i=0;i<n;i++)cin>>arr[i];

    int ma=-1;
    map<int,int>m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
        ma=max(ma,arr[i]);
    }
    
    if(m[ma]>1){
        for(int i=0;i<n;i++){
            cout <<ma<<" ";
        }
        cout <<endl;
        return;
    }

   int ma2=-1;

   for(int i=0;i<n;i++){
    if(arr[i]!=ma){
      ma2=max(ma2,arr[i]);
    }
   }

   for(int i=0;i<n;i++){
    if(arr[i]!=ma){
        cout <<ma<<" ";
    }
    else{
        cout <<ma2<<" ";
    }
   }
   cout <<endl;
   return;

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