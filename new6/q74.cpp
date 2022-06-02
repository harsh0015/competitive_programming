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

    int mi=INT_MAX;
int ma=INT_MIN;

int idm=0;int idn=0;

for(int i=0;i<n;i++){
   if(arr[i]>ma){
    ma=arr[i];
    idm=i;
   }
    if(arr[i]<mi){
    mi=arr[i];
    idn=i;
   }
}

int ans=max(idm,idn)+1;

ans=min(ans,max(n-idm,n-idn));

ans=min(ans,idn+1+n-idm);

ans=min(ans,idm+1+n-idn);

cout <<ans<<endl;
 
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