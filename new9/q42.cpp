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

vector<int>  facts(int n){
    vector<int >ans;

    for(int i=1;i<=n;i++){
        if(n%i==0)ans.push_back(i);
    }

    return ans;
}

void solve(){
    int n;cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];


    sort(arr,arr+n);


vector<int> sols=facts(arr[0]);

for(int i=sols.size()-1;i>=0;i--){
    bool flag=true;
    int count=0;

    for(int j=0;j<n;j++){
        if(arr[j]%sols[i]!=0){
            
            count++;
        }
    }

    if(count<=1){
        cout <<sols[i]<<endl;
        break;
    }
}

 
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