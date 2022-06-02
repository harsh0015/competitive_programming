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

int arr[n],arr1[n];

for(int i=0;i<n;i++)cin>>arr[i];

for(int i=0;i<n;i++)cin>>arr1[i];

vector<int>v;

for(int i=0;i<n;i++){
    if(arr1[i]==0)v.push_back(arr[i]);
}

sort(v.begin(), v.end());

int j;

if(v.size()>0){
    j=v.size()-1;
}

for(int i=0;i<n;i++){
    if(arr1[i]==1)cout <<arr[i]<<" ";
    else {
        cout<<v[j]<<" ";
        j--;
    }
}
cout <<endl;
 
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