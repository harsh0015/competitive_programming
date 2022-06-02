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
 int n,m;cin>>n>>m;

 char arr[n+1][m+1];

 for(int i=0;i<n;i++){
    string s;cin>>s;

    for(int j=0;j<m;j++){
        arr[i][j]=s[j];
    }
 }
 bool flag=true;
 int count=1;

 while(count>0){
cout <<"h"<<endl;

 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]=='R'){
              if(i>0){
                if(arr[i-1][j]=='.' || arr[i-1][j]=='W')arr[i-1][j]='W';

                else {
                    flag=false;
                    break;
                }
              }

               if(i+1<n){
                if(arr[i+1][j]=='.' || arr[i+1][j]=='W')arr[i+1][j]='W';

                else {
                    flag=false;
                    break;
                }
              }

               if(j>0){
                if(arr[i][j-1]=='.' || arr[i][j-1]=='W')arr[i][j-1]='W';

                else {
                    flag=false;
                    break;
                }
              }
               if(j+1<m){
                if(arr[i][j+1]=='.' || arr[i][j+1]=='W')arr[i][j+1]='W';

                else {
                    flag=false;
                    break;
                }
              }


        }
         if(arr[i][j]=='W'){
              if(i>0){
                if(arr[i-1][j]=='.' || arr[i-1][j]=='R')arr[i-1][j]='R';

                else {
                    flag=false;
                    break;
                }
              }

               if(i+1<n){
                if(arr[i+1][j]=='.' || arr[i+1][j]=='R')arr[i+1][j]='R';

                else {
                    flag=false;
                    break;
                }
              }

               if(j>0){
                if(arr[i][j-1]=='.' || arr[i][j-1]=='R')arr[i][j-1]='R';

                else {
                    flag=false;
                    break;
                }
              }
               if(j+1<m){
                if(arr[i][j+1]=='.' || arr[i][j+1]=='R')arr[i][j+1]='R';

                else {
                    flag=false;
                    break;
                }
              }
    }
}

    if(!flag)break;
 }


  // for(int i=0;i<n;i++){
  //       for(int j=0;j<m;j++){
  //           if(arr[i][j]=='.')count++;
           
  //       }
  //   }

  //   cout <<count<<"*";
 
}



if(!flag){
    cout <<"NO"<<endl;
    return;
}

else{
    cout <<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='.')cout <<"W";
            else cout <<arr[i][j];
        }
        cout <<endl;
    }
 
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