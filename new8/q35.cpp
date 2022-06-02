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

ll n;cin>>n;
ll y=n;
vector<ll> arr1(n),arr2(n);

for(ll i=0;i<n;i++)cin>>arr1[i];

for(ll i=0;i<n;i++)cin>>arr2[i];

sort(arr1.begin(), arr1.end());
sort(arr2.begin(), arr2.end());
ll sum1=0,sum2=0;

ll h=n/4;

for(ll i=h;i<n;i++){
    sum1=sum1+arr1[i];

    sum2=sum2+arr2[i];


}
// cout <<sum1<<" "<<sum2<<endl;
if(sum1>=sum2){
    cout <<0<<endl;
    return;
}



ll i=h;
ll counter=0;
ll last=n-n/4;
ll j=h;

while(sum1<sum2 && i<n){
    counter++;
    y++;
    if(y-y/4>last){

      sum1=sum1+ 100;
      last=y-y/4;

      if(j>0){
        j--;
        sum2=sum2+arr2[j];
      }
        }
    else {
        sum1=sum1+100-arr1[i];
        i++;
    }
  
}

cout <<counter<<endl;
 
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