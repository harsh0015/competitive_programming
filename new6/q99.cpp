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
 
 ll n,x;cin>>n>>x;
 ll arr[n];

 for(ll i=0;i<n;i++){
    cin>>arr[i];
    
}

for(int i=0;i<n;i++){
    if(arr[i]==x){
        cout <<1<<endl;
        return;
    }
}

    sort(arr,arr+n);

    int l=arr[n-1];

    if(x%l==0){
        cout <<x/l<<endl;
    }
    else{
        ll r=x/l;
        if(r==0){
            cout <<2<<endl;
            return;
        }
        else cout <<r-1 +2<<endl;
    }

   //  ll l=arr[n-1];

   // if(l<=x){
   //   if(x%l==0){
   //      cout <<x/l<<endl;
   //   }
   //   else{
   //      cout <<2*(x/l+1)-2<<endl;
   //      return;
   //   }
   // }

   // else cout <<2<<endl;
   
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