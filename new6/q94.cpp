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

  cout <<3*n<<endl;

  for(int i=1;i<=n/2;i++){
    cout <<1 <<" "<<2*i-1<<" "<<2*i<<endl;
    cout <<1 <<" "<<2*i-1<<" "<<2*i<<endl;
    cout<<2<<" "<<2*i-1<<" "<<2*i<<endl;
   cout <<1 <<" "<<2*i-1<<" "<<2*i<<endl;
    cout <<1 <<" "<<2*i-1<<" "<<2*i<<endl;
    cout<<2<<" "<<2*i-1<<" "<<2*i<<endl;
   

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