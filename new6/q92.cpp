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


 vector<int>arr1(n);
 ll last=-1;
  bool flag1=false,flag2=false;
  ll first=-1;

 for(ll i=0;i<n;i++){
    cin>>arr1[i];
    if(arr1[i]!=0)last=i;

    if(!flag1 && arr1[i]!=0){
       first=i;
       flag1=true;
    }
}

    if(n==1){
        cout <<arr1[0]*2<<endl;
        return;
    }

    ll ans=0;

    vector<int>arr;
    // cout <<first<<" "<<last<<endl;

    for(int i=first;i<=last;i++)arr.push_back(arr1[i]);

   // cout <<arr.size()<<endl;

        if(!flag1){
            cout <<0<<endl;
            return;
        }

for(ll i=0;i<arr.size();i++){
    if(i==0){
        if(arr[i]>arr[i+1]){
            ans=ans+abs(arr[i]-arr[i+1]);
            arr[i]=arr[i+1];
        }
    }
    else if(i==n-1){
        if(arr[i]>arr[i-1]){
            ans=ans+abs(arr[i]-arr[i-1]);
            arr[i]=arr[i-1];
        }
    }
    else{
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            ans=ans+ min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            arr[i]=max(arr[i-1],arr[i+1]);
        }
    }

}

ans=ans+arr[0]+arr[arr.size()-1];

for(ll i=0;i<arr.size()-1;i++){
    ans=ans+abs(arr[i]-arr[i+1]);
} 

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