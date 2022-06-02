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

 int arr[n+1];
 arr[1]=-1;

 for(int i=2;i<=n;i++){
    int a;cin>>a;
    arr[i]=a;
 }

 if(k<=n){
    cout <<1<<endl;
    return;
 }
 else{
    if(k%n==0){
        cout <<2*(k/n) -1<<endl;
        return;
    }
    else {
        cout <<2*(k/n+1)-1<<endl;
        return;
    }
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