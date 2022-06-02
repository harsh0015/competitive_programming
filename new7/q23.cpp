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

 int arr[n+1];

 for(int i=1;i<n+1;i++)cin>>arr[i];

    int count=0;
for(int i=1;i<n;i++){
    // cout <<i<<" "<<count<<endl;
    if(i<arr[i]){
        for(int j=arr[i]-i;j<=n;j=j+arr[i]){
            if(i+j==arr[i]*arr[j] && j>i){
                count++;
                // cout <<i<<" "<<j<<" "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    else {
        // int k;
        // for( k=1;k<INT_MAX;k++){
        //     if(k*arr[i]>i)break;
        // }

        if(i%arr[i]==0){
             for(int j=arr[i]+i;j<=n;j=j+arr[i]){
            if(i+j==arr[i]*arr[j] && j>i){
                count++;
                // cout <<i<<" "<<j<<" "<<arr[i]<<" "<<arr[j]<<endl;
            }
        } 
        }
        else {
            int y=i%arr[i];

        for(int j=arr[i]-y;j<=n;j=j+arr[i]){
            if(i+j==arr[i]*arr[j] && j>i){
                count++;
                // cout <<i<<" "<<j<<" "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }

        }

    }
}

cout <<count<<endl;
 
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