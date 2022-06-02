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
 int n=s.length();

 int ans=0;
 int sum=0;
 set<int>st;


 for(int i=0;i<n;i++){
    int x=s[i]-'0';

    if(x==0){
        ans++;
        sum=0;
        st.clear();
        continue;
    }

    if(x%3==0){
        ans++;
        sum=0;
        st.clear();
        continue;
    }
    sum=sum+x;

    if(sum%3==0){
        ans++;
        sum=0;
        st.clear();
        continue;
    }
    
    int check=3;
    while(check<=sum){
        if(st.find(sum-check)!=st.end()){
            ans++;
            sum=0;
            st.clear();
            break;
        }
        check=check+3;
    }
    if(sum!=0)st.insert(sum);

 }

 cout <<ans<<endl;
}


int main(){
    fastio;

    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}