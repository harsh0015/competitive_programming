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

    if(arr[n-1]==0){
        for(int i=1;i<n+2;i++)cout <<i<<" ";

            cout<<endl;
        return;
    }

    int count=0;
    for(int i=0;i<n;i++)if(arr[i]==1)count++;


    if(count==n){
        cout<<n+1<<" ";

        for(int i=1;i<n+1;i++)cout <<i<<" ";

        cout <<endl;
    return;
    }

    bool flag=false;
    int c;
    for(int i=0;i<n-1;i++){
        if(arr[i]==0 && arr[i+1]==1){
            flag=true;
            c=i;
            break;
        }
    }

    if(!flag){
        cout <<-1<<endl;
        return;
    }

    else {
        for(int i=0;i<n;i++){
            cout<<i+1<<" ";

            if(i==c)cout <<n+1<<" ";
        }

        cout <<endl;
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