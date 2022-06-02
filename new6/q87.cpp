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
 
 int n,k;cin>>n>>k;

 int arr[n];

 for(int i=0;i<n;i++)cin>>arr[i];

    int count=1;

    for(int i=1;i<n;i++){
if(arr[i]!=arr[i-1])count++;
    }

    if(k==1){
        if(count==1)cout <<1<<endl;
        else cout<<-1<<endl;
        return;
    }

    if(k>=count){
        cout <<1<<endl;
        return;
    }

    if(count%k==0){
        cout <<count/k<<endl;
        return;
    }
    else {
        cout<<count/k+1<<endl;
        return;
    }
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