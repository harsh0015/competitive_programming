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

ll a[n],b[n],c[n];

for(ll i=0;i<n;i++)cin>>a[i];
for(ll i=0;i<n;i++)cin>>b[i];
for(ll i=0;i<n;i++)cin>>c[i];

    sort(a,a+n);
sort(b,b+n);
sort(c,c+n);

ll i=0,j=0,k=0;

ll count=0;
while(i<n && j<n && k<n){

   if(a[i]>=b[j]){
    while(b[j]<=a[i] && j<n){
        j++;
    }
   }
    
   if(b[j]>=c[k]){
    while(c[k]<=b[j] && k<n){
        k++;
    }
   }

   if(a[i]<b[j] && b[j]<c[k] && i<n && j<n && k<n){
    count++;
   }
   else break;

   i++;j++;k++;

}

cout <<count<<endl;

}


int main(){
    fastio;

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}