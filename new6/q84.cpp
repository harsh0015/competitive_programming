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
vector<int> arr(n);
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 sort(arr.begin(), arr.end());
 
vector<int>ans;

ans.push_back(arr[n-1]);

arr.erase(arr.begin()+n-1);
 int ind=0;
    int gc=0;
    int temp=ans[0];
for(int i=0;i<n-1;i++){
  

    for(int j=0;j<arr.size();j++){
        if(__gcd(arr[j],temp)>gc){
            ind=j;
            gc=__gcd(arr[j],temp);
        }

    }
    temp=arr[ind];
    
    ans.push_back(arr[ind]);
    arr.erase(arr.begin()+ind);
   ind=0;
   gc=0;
}

for(int i=0;i<n;i++){
    cout <<ans[i]<<" ";
}
cout <<endl;

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