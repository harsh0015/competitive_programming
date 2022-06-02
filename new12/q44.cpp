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

 ll mod =1e9+7;

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}
 
 ///
void solve(){

    int n,k;cin>>n>>k;
    vector<int>v(n+1);

    for(int i=1;i<=n;i++)cin>>v[i];

    bool flag=true;

for(int i=1;i<n+1;i++)if(v[i]!=i)flag=false;

    if(flag){
        cout <<0<<endl;
        return;
    }

    if(k==n){
        cout <<1<<endl;
        return;
    }

    int start=-1;
    int end=-1;

    for(int i=1;i<n+1;i++){
        if(v[i]!=i && start==-1){
            start=i;
            end=i;
            continue;
        }
        if(v[i]!=i)end=i;
    }

    if(end-start+1<=k){
        cout <<1<<endl;
        return;
    }

    ///
    vector<int>v2(n+1);
    for(int i=1;i<n+1;i++)v2[i]=v[i];

        //
   int h=1;

   for(int i=1;i<n+1;i++){
    if(v[i]!=i){

       vector<int>v1;
       int r=i;
       while(h<=k && r<n+1){
          v1.push_back(v[r]);
          h++;
          r++;
       }
       sort(v1.begin(),v1.end());
       r=0;
       for(int j=i;j<i+v1.size();j++){
        v[j]=v1[r];
         r++;
       }
       break;
    }
   }

  
h=1;
   for(int i=1;i<n+1;i++){
    if(v[i]!=i){
       vector<int>v1;
       int r=i;
       while(h<=k && r<n+1){
          v1.push_back(v[r]);
          h++;
          r++;
       }
       sort(v1.begin(),v1.end());

       r=0;
       for(int j=i;j<i+v1.size();j++){
        v[j]=v1[r];
         r++;
       }
       break;
    }
   }

   bool flag1=true;
   for(int i=1;i<n+1;i++){
    if(v[i]!=i){
       flag1=false;
       break;
    }
   }
///////////

   bool flag2=true;
    h=1;

   for(int i=n;i>=1;i--){
    if(v2[i]!=i){
       
       vector<int>v1;
       int r=i;
       while(h<=k && r>=1){
          v1.push_back(v2[r]);
          h++;
          r--;
       }
       sort(v1.begin(),v1.end());
       r=v1.size()-1;
       for(int j=i;j>i-v1.size();j--){
        v2[j]=v1[r];
         r--;
       }
       break;
    }
   }


  
h=1;
  for(int i=n;i>=1;i--){
    if(v2[i]!=i){

      
       vector<int>v1;
       int r=i;
       while(h<=k && r>=1){
          v1.push_back(v2[r]);
          h++;
          r--;
       }
       sort(v1.begin(),v1.end());
       r=v1.size()-1;
       for(int j=i;j>i-v1.size();j--){
        v2[j]=v1[r];
         r--;
       }
       break;
    }
   }




   for(int i=1;i<n+1;i++){
    if(v2[i]!=i){
        flag2=false;
        break;
    }
   }
   
  
   
   if(flag1 || flag2)cout <<2<<endl;
   else cout <<3<<endl;

}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}