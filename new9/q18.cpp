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

int n,a;cin>>n>>a;

int arr[n];

for(int i=0;i<n;i++)cin>>arr[i];

    if(n==1){
        cout <<0<<endl;
        return;
    }

    sort(arr,arr+n);

int ans1,ans2;

if(arr[0]>=a){
    cout <<abs(arr[n-2]-a)<<endl;
    return;
}

if(arr[n-1]<=a){
    cout <<abs(arr[1]-a)<<endl;
    return;
}

int x,y,z,w;

 x=2*abs(arr[0]-a);

if(arr[n-2]>a)x=x+abs(arr[n-2]-a);


y=abs(arr[0]-a);

if(arr[n-2]>a)y=y+2*(abs(arr[n-2]-a));

z=2*abs(a-arr[n-1]);

if(arr[1]<a)z=z+abs(arr[1]-a);

w=abs(a-arr[n-1]);

if(arr[1]<a)w=w+ 2*abs(arr[1]-a);

// cout <<x<<" "<<y<<" "<<z<<" "<<w<<endl;

cout <<min(x,min(y,min(w,z)))<<endl;
 
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