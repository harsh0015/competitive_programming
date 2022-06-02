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


int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

 
void solve(){

    ll n;cin>>n;
    ll arr[n];

    for(ll i=0;i<n;i++)cin>>arr[i];

    if( n==1 ){
        cout <<arr[0]<<endl;
        return;
    }
    if(n==2){
        cout <<max(arr[0],arr[1])<<endl;
        return;
    }
    if(n==3){
        cout <<max(arr[0]+arr[2],max(arr[0]+arr[1],arr[1]+arr[2]))<<endl;
        return;
    }

    ll pre[n];
    pre[0]=arr[0];
    pre[1]=arr[1];

    for(ll i=2;i<n;i++){
        pre[i]=pre[i-2]+arr[i];
    }
   
   vector<ll>v;

   for(ll i=0;i<n;i++){
    if(i%2==1){
      v.push_back(arr[i]-arr[i-1]);
    }
   }

     int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < v.size(); i++)
    {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    // cout <<"*"<<max_so_far<<endl;

    max_so_far=max(max_so_far,0);



    vector<int>v2;

     for(ll i=1;i<n-1;i++){
    if(i%2==1){
      v2.push_back(arr[i+1]-arr[i]);
    }
   }


       int max_so_far1 = INT_MIN, max_ending_here1 = 0;
 
    for (int i = 0; i < v2.size(); i++)
    {
        max_ending_here1 = max_ending_here + v2[i];
        if (max_so_far1 < max_ending_here1)
            max_so_far1 = max_ending_here1;
 
        if (max_ending_here1 < 0)
            max_ending_here1 = 0;
    }
     
     max_so_far1=max(max_so_far1,0);
    max_so_far=max(max_so_far,max_so_far1);

   if(max_so_far>0){
    if(n%2==1){
        cout <<pre[n-1]+max_so_far<<endl;
    }
    else cout <<pre[n-2]+max_so_far<<endl;
   }
  else{
     if(n%2==1){
        cout <<pre[n-1]<<endl;
    }
    else cout <<pre[n-2]<<endl;
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