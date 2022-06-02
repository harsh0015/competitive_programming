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
    bool flag1=true,flag2=true;
int a,b,c,d;
 unordered_map<int,int>m;
 unordered_map<int,int>m1;

 int mi=INT_MAX;
 int ma=INT_MIN;
 int count=0;

 for(int i=0;i<n;i++){
    // cout <<i<<" "<<count<<endl; 
  if(count==2){
    flag1=false;
    break;
  }
  if(m.find(arr[i])==m.end()){
    m[arr[i]]++;
    mi=min(mi,arr[i]);
     ma=max(ma,arr[i]);
  }
  else{
    if(mi!=1){
        flag1=false;
        break;
    }
    for(int j=1;j<=ma;j++){
      if(m.find(j)==m.end()){
        flag1=false;
        break;
      }
    }

    count++;
    if(count==1)a=ma;
    if(count==2)b=ma;
    ma=INT_MIN;
    mi=INT_MAX;
    i--;
    m.clear();
  }
 }

 if(count==1){
     if(mi!=1){
        flag1=false;
        // break;
    }
    for(int j=1;j<=ma;j++){
      if(m.find(j)==m.end()){
        flag1=false;
        // break;
      }
    }

    count++;
    if(count==1)a=ma;
    if(count==2)b=ma;
    ma=INT_MIN;
    mi=INT_MAX;
    // i--;
    m.clear();
 }

 // cout <<flag1<<endl;

 count=0;
 ma=INT_MIN;mi=INT_MAX;
 m.clear();

 for(int i=n-1;i>=0;i--){
  if(count==2){
    flag2=false;
    break;
  }
  if(m.find(arr[i])==m.end()){
    m[arr[i]]++;
    mi=min(mi,arr[i]);
     ma=max(ma,arr[i]);
  }
  else{
    if(mi!=1){
        flag2=false;
        break;
    }
    for(int j=1;j<=ma;j++){
      if(m.find(j)==m.end()){
        flag2=false;
        break;
      }
    }

    count++;
    if(count==1)d=ma;
    if(count==2)c=ma;
    ma=INT_MIN;
    mi=INT_MAX;
    i++;
    m.clear();
  }
 }

 // 
 if(count==1){
     if(mi!=1){
        flag2=false;
        // break;
    }
    for(int j=1;j<=ma;j++){
      if(m.find(j)==m.end()){
        flag2=false;
        // break;
      }
    }

    count++;
    if(count==1)d=ma;
    if(count==2)c=ma;
    ma=INT_MIN;
    mi=INT_MAX;
    // i--;
    m.clear();
 }
 // 


if(flag1&&flag2){
    cout <<2<<endl;
    cout <<a<<" "<<b<<endl;
    cout <<c<<" "<<d<<endl;
}
else if(flag1){
    cout <<1<<endl;
    cout <<a<<" "<<b<<endl;
}
else if(flag2){
    cout <<1<<endl;
    cout <<c<<" "<<d<<endl;
}
else cout <<0<<endl;

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