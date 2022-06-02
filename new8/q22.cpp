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

int len=0;
for(int i=0;i<n;i++){
    int sum=arr[i];
    if(sum>100)len=max(len,1);

    for(int j=i+1;j<n;j++){
        sum=sum+arr[j];

        if(sum> 100*(j-i+1)){
            len=max(len,j-i+1);
            
        }
    }
}

cout <<len<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}