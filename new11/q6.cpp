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
     vector<vector<int>> v;
     vector<string>v2;

     for(int i=0;i<n;i++){
        string s;cin>>s;
        vector<int>x(5,0);
        for(int j=0;j<s.length();j++){
            x[s[j]-'a']++;
        }

        v2.push_back(s);
        v.push_back(x);
     }
    
     int ans=0;

     for(int i=0;i<5;i++){
        int sum=0;
        int count=0;
        vector<int>left;
        for(int j=0;j<n;j++){
            if(2*v[j][i]>v2[j].size()){
             count++;
             sum=sum+ 2*v[j][i]-v2[j].size();
            }
            else{
                left.push_back(2*v[j][i]-v2[j].size());
            }
        }

        sort(left.begin(), left.end());
        int k=left.size()-1;

        while(sum>0 && k>=0){
            if(left[k]+sum>0){
                count++;
                
                sum=sum+left[k];
                k--;
            }
            else break;
        }
        ans=max(ans,count);

     }

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