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
    vector<int>v;

    while(n){
        v.push_back(n%10);
        n=n/10;
    }

    reverse(v.begin(), v.end());

    int count1=0,count2=0;

    for(int i=v.size()-1;i>=0;i--){
        if(count1==2)break;
        if(v[i]==0)count1++;
        else count2++;
    }

    int ans=INT_MAX;

    if(count1==2)ans=min(ans,count2);

    int a=-1;
 

    int count=0;
    bool flag=false;

    for(int i=v.size()-1;i>=0;i--){
       if(v[i]==5 && a==-1){
        a=i;
        continue;
       }
       if(v[i]==2 && a!=-1){
        flag=true;
        break;
       }
       count++;
    }
    if(flag)
       ans=min(ans,count);
    

    count=0;

    a=-1;
    flag=false;
    for(int i=v.size()-1;i>=0;i--){
       if(v[i]==5 && a==-1){
        a=i;
        continue;
       }
       if(v[i]==7 && a!=-1){
        flag=true;
        break;
       }
       count++;
    }
    if(flag)
     ans=min(ans,count);
    
      a=-1;
      flag=false;
      count=0;
    for(int i=v.size()-1;i>=0;i--){
       if(v[i]==0 && a==-1){
        a=i;
        continue;
       }
       if(v[i]==5 && a!=-1){
       flag=true;
        break;
       }
       count++;
    }
   

     if(flag)
      ans=min(ans,count);
     

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