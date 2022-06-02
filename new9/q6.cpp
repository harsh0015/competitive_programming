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

 int count1=0,count2=0,count3=0;
 int n=s.length();
 vector<int>v1,v2,v3;

 for(int i=0;i<n-2;i++){
    string g=s.substr(i,3);

    string r;
    string k;

    if(i<n-4)r=s.substr(i,5);
    if(i>=2)k=s.substr(i-2,5);
    // cout <<g<<endl;

    if(i>=2){
        if(g=="one" && k!="twone"){
            v1.push_back(i);
          count1++;
        }
    }
    else{
         if(g=="one"){
        v1.push_back(i);
        count1++;
    }
    }
   
    // if(g=="two")count2++;

    if(i<n-4){
     if(g=="two" && r!="twone"){
        v2.push_back(i);
        count2++;
    }
    }
    else{
        if(g=="two"){
            v2.push_back(i);
            count2++;
        }
    }
 }


 for(int i=0;i<n-4;i++){
    string g=s.substr(i,5);
    // cout <<g<<endl;
    if(g=="twone"){
        v3.push_back(i);
        count3++;
    }
   
 }
 // // cout<<count1<<" "<<count2<<" "<<count3<<endl;
 // cut <<v1.size()<<" "<<v2.size()<<" "<<v3.size()<<endl;

 cout <<count1+count2+count3<<endl;

 for(int i=0;i<v1.size();i++)cout <<v1[i]+2<<" ";
for(int i=0;i<v2.size();i++)cout <<v2[i]+2<<" ";
for(int i=0;i<v3.size();i++)cout <<v3[i]+3<<" ";


    cout <<endl;



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