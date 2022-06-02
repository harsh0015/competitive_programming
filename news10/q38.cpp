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

    ll arr1[n];
    ll arr2[n-1];



    for(ll i=0;i<n;i++){
        cin>>arr1[i];        

    }

        for(ll i=0;i<n-1;i++)cin>>arr2[i];


    if(n==2){
        ll mi=100000000000000;
        if(arr1[0]<arr2[0])mi=min(mi,arr2[0]-arr1[0]);

        if(arr1[1]<arr2[0])mi=min(mi,arr2[0]-arr1[1]);

        cout <<mi<<endl;
        return;
    }

            sort(arr1,arr1+n);
        sort(arr2,arr2+(n-1));
        
     
       ll ma=100000000000000;

      if(arr2[0]-arr1[0]== arr2[n-2]-arr1[n-1]){
        cout <<arr2[0]-arr1[0]<<endl;
        return;
      }
    else{
        set<ll>st1,st2;

        for(int i=1;i<n;i++){
            st1.insert(arr2[i-1]-arr1[i]);


        }
        if(st1.size()==1){
                ma=min(ma,arr2[n-2]-arr1[n-1]);
            }

                for(int i=0;i<n-1;i++){
            st2.insert(arr2[i]-arr1[i]);


        }
        if(st2.size()==1){
                ma=min(ma,arr2[0]-arr1[0]);
            }

            cout <<ma<<endl;
    }

    

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