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
 int n,k;cin>>n>>k;
 string s;cin>>s;
 char arr[n+1];

 for(int i=0;i<n;i++){
    arr[i]=s[i];
 }
 int check;

 int count1=0,count0=0,countx=0;

 for(int i=0;i<k;i++){
    if(s[i]=='1')count1++;
    else if(s[i]=='0')count0++;
    else {
        countx++;
        check=i;
    }
 }

 int x;
  x=abs(count1-count0);
 if(x>countx){
    cout <<"NO"<<endl;
    return;
 }
 bool flag=false;
 char c;

if(countx==1){
    countx=0;

    if(count0>count1){
        count1++;
        c='1';
        arr[check]='1';
    }
    else {
        count0++;
        c='0';
        arr[check]='0';
    }

    // cout <<"("<<check<<" "<<arr[check]<<")"<<endl;
  check=-1;
    // flag=true;

}

  // cout<<" "<<count0<<" "<<count1<<" "<<countx<<endl;

// for(int i=0;i<n;i++)cout <<arr[i];
//     cout <<endl;
for(int i=1;i+k-1<n;i++){
// cout<<"*"<<arr[i-1]<<" "<<i<<" "<<count0<<" "<<count1<<" "<<countx<<endl;

    
    if(arr[i-1]=='1')count1--;
    else if(arr[i-1]=='0')count0--;
    else {
        countx--;
        
    }
   
  
    if(arr[i+k-1]=='1')count1++;
    else if(arr[i+k-1]=='0')count0++;
    else {countx++;
        check=i+k-1;

    }

          // cout<<i<<arr[i+k-1]<<" "<<count0<<" "<<count1<<" "<<countx<<endl;

      x=abs(count1-count0);
 if(x>countx){
    // cout<<i<<" "<<count0<<" "<<count1<<" "<<countx<<endl;
    cout <<"NO"<<endl;
    return;
 }
if(countx==1){
    countx=0;

    if(count0>count1){
        count1++;
        c='1';
        arr[check]='1';
    }
    else {
        count0++;
        c='0';
        arr[check]='0';
    }
    // cout <<"*"<<check<<endl;
    //  cout <<"("<<check<<" "<<arr[check]<<")"<<endl;

 check=-1;

}


}

cout <<"YES"<<endl;

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