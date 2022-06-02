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
     vector<int>v1,v2;
     for(int i=1;i<n+1;i++){
        int a;cin>>a;
        if(i%2==0)v2.push_back(a);
        else v1.push_back(a);
     }
     sort(v1.begin(), v1.end(),greater<int>());
     sort(v2.begin(), v2.end());

     vector<int>v3;
     int i=0,j=0;

     while(i<v1.size()&&j<v2.size()){
        v3.push_back(v1[i]);
        v3.push_back(v2[j]);
        i++;j++;
     }
     if(i<v1.size()){
        v3.push_back(v1[i]);
        i++;
     }

     int count=0;

     for(int i=0;i<n;i++)cout <<v3[i]<<" ";
        cout <<endl;

     for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=i+1;j<n;j++){
                if(j%2==1)count=count+v3[i]*v3[j];
            }
        }
     }

     cout <<count<<endl;
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