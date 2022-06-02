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

 string s;cin>>s;


vector<int>v1,v2,v3,v4;


v1.push_back(0);
    v2.push_back(0);
     v3.push_back(0);
      v4.push_back(0);



for(int j=1;j<=10;j++){
    // cout <<s[j-1]<<"*"<<endl;
    if(j%2==1){
        int i=j/2+1;
        // cout <<"("<<i<<")"<<endl;
        // cout <<s[j-1]<<endl;
      if(s[j-1]=='1'){
        // cout <<'#'<<endl;
        v1.push_back(v1[i-1]+1);
        v2.push_back(v2[i-1]);

        // cout <<v1[i].first<<"*"<<endl;
      }
      else if(s[j-1]=='0'){
        v1.push_back(v1[i-1]);
        v2.push_back(v2[i-1]);
      } 
      else{
        v1.push_back(v1[i-1]);
        v2.push_back(v2[i-1]+1);
      }

      // v3.push_back(v3[i-1]);
      //   v4.push_back(v4[i-1]);
    }
    else{
         int i=j/2;
         // cout <<"("<<i<<")"<<endl;
      if(s[j-1]=='1'){
        // cout <<'#'<<endl;
        v3.push_back(v3[i-1]+1);
        v4.push_back(v4[i-1]);

        // cout <<v1[i].first<<"*"<<endl;
      }
      else if(s[j-1]=='0'){
        v3.push_back(v3[i-1]);
        v4.push_back(v4[i-1]);
      } 
      else{
        v3.push_back(v3[i-1]);
        v4.push_back(v4[i-1]+1);
      }

      // v1.push_back(v1[i-1]);
      //   v2.push_back(v2[i-1]);
    }
}

// for(int i=1;i<6;i++)cout <<v1[i]<<" "<<v2[i]<<" | ";

// cout<<endl;

// for(int i=1;i<6;i++)cout <<v3[i]<<" "<<v4[i]<<" | ";

// cout<<endl;

for(int i=1;i<=5;i++){
    if(v1[i] +v2[i]- v3[i-1]>5-i+1){
        cout <<2*i-1<<endl;
        return;
    }
    if(v3[i-1] +v4[i-1] - v1[i]>5-i){
        cout <<2*i-1<<endl;
        return;
    }
    if(v3[i]+v4[i]-v1[i]>5-i){
        cout <<2*i<<endl;
        return;
    }
    if(v1[i]+v2[i]-v3[i]>5-i){
        cout <<2*i<<endl;
        return;
    }
}

cout <<10<<endl;
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