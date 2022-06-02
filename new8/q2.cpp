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

    vector<int>v;
    for(int i=0;i<s.length();i++){
     v.push_back(s[i]-'a'+1);
    }

    // for(int i=0;i<v.size();i++)cout <<v[i]<<" ";

        int ma=0;
    int n=s.length();
    for(int i=0;i<n;i++){
     ma=max(ma,v[i]);
    }


if(n!=ma){
    cout<<"NO"<<endl;
    return;
}
    
    int i=0,j=n-1;
bool flag=true;
    while(i<=j){
    if(v[i]==ma){
        i++;
        ma--;
        continue;
    }
    else if(v[j]==ma){
        j--;
        ma--;
    }
    else{
        flag=false;
        break;
    }
    }

    if(flag)cout<<"YES"<<endl;
    else cout <<"NO"<<endl;
 
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