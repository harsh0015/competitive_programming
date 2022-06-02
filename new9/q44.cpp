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

 int n,k,z;cin>>n>>k>>z;


 int arr[n];


 for(int i=0;i<n;i++)cin>>arr[i];



int ans=0;

int sum[n];
sum[0]=arr[0];

for(int i=1;i<n;i++)sum[i]=sum[i-1]+arr[i];


for(int i=1;i<n;i++){
    int sum1=sum[i];
    // cout <<"@"<<sum1<<endl;
   

    if(i>k)break;

    int rem=k-i;

   int tot=min(2*z,rem);
    
    int x=arr[i]+arr[i-1];

    // cout <<"*"<<x<<endl;

 sum1= sum1 + (tot/2)*x + (tot%2)*arr[i-1];

 // cout <<"$"<<tot<<" "<<sum1<<endl;

 // cout <<i<<" "<<sum1<<endl;

    rem=rem-tot;

    sum1=sum1+ sum[i+rem]-sum[i];

    ans=max(ans,sum1);
}
  
  cout <<ans<<endl;

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