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

 int a,b,c,d;
 pair<int,int>p1,p2,p3,p4;

int arr[6];
arr[0]=4;arr[1]=8;arr[2]=15;arr[3]=16;arr[4]=23;arr[5]=42;



 cout<< '?'<<" "<<1<<" "<<2<<"\n";
 cout.flush();

 cin>>a;

 for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(arr[i]*arr[j]==a){
            p1.first=arr[i];
            p1.second=arr[j];
            break;
        }
    }
 }

  cout<< '?'<<" "<<3<<" "<<4<<"\n";
 cout.flush();

 cin>>b;

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(arr[i]*arr[j]==b){
            p2.first=arr[i];
            p2.second=arr[j];
            break;
        }
    }
 }

  cout<< '?'<<" "<<4<<" "<<5<<"\n";
 cout.flush();
 cin>>c;
  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(arr[i]*arr[j]==c){
            p3.first=arr[i];
            p3.second=arr[j];
            break;
        }
    }
 }



  cout<<'?'<<" "<<2<<" "<<3<<"\n";
 cout.flush();

 cin>>d;

  for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(arr[i]*arr[j]==d){
            p4.first=arr[i];
            p4.second=arr[j];
            break;
        }
    }
 }

 int ans[7];

 if(p1.first==p4.first){
    ans[2]=p1.first;
    ans[1]=p1.second;
    ans[3]=p4.second;
 }
 else if(p1.first==p4.second){
     ans[2]=p1.first;
    ans[1]=p1.second;
    ans[3]=p4.first;
 }
  else if(p1.second==p4.second){
     ans[2]=p1.second;
    ans[1]=p1.first;
    ans[3]=p4.first;
 }
 else{
 ans[2]=p1.second;
    ans[1]=p1.first;
    ans[3]=p4.second;
 }


if(p2.first==ans[3])ans[4]=p2.second;
else ans[4]=p2.first;

if(p3.first==ans[4])ans[5]=p3.second;
else ans[5]=p3.first;

// cout <<ans[5]<<endl;
// cout <<p1.first<<" "<<p1.second<<endl;
// cout.flush();
// cout <<p2.first<<" "<<p2.second<<endl;
// cout.flush();
// cout <<p3.first<<" "<<p3.second<<endl;
// cout.flush();

// cout <<p4.first<<" "<<p4.second<<endl;
// cout.flush();
int i;

for( i=0;i<6;i++){
    bool flag=false;

    for(int j=1;j<=5;j++){
        if(arr[i]==ans[j])flag=true;
    }
    if(!flag)break;
}

// cout <<i<<endl;
ans[6]=arr[i];

cout <<'!'<<" ";

for(int i=1;i<7;i++)cout <<ans[i]<<" ";

    cout <<"\n";
cout.flush();


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