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
vector<int >odd,even;

for(int i=0;i<n;i++)
{
if(arr[i]%2==1)odd.pb(arr[i]);
else even.pb(arr[i]);
} 

sort(even.begin(), even.end());
sort(odd.begin(), odd.end());

for(int i=0;i<odd.size();i++)even.pb(odd[i]);

 int count=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(__gcd(even[i],2*even[j])>1)count++;
    }
}

cout<<count<<endl;
 
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