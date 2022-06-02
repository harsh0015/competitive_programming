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

int ans=0;
bool flag=true;

for(int i=1;i<n;i++){
    if(arr[i]==1){
        if(arr[i-1]==2)ans=ans+3;
        else ans=ans+4;
    }
    else if(arr[i]==2){
        if(arr[i-1]==1)ans=ans+3;
        else {
            flag=false;
            break;
        }
    }
    else{
        if(arr[i-1]==1)ans=ans+4;
        else{
            flag=false;
            break;
        }
    }
}
int c=0;

for(int i=0;i<n-2;i++){
    if(arr[i]==3 && arr[i+1]==1 && arr[i+2]==2)c++;
}
ans=ans-c;
if(flag){
    cout <<"Finite"<<endl;
    cout <<ans<<endl;
}
else {
    cout <<"Infinite"<<endl;
}
 
}


int main(){
    fastio;

    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}