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

map<pair<int,int>,int>m;
int count=0;
int y=0;

while(n--){
   stack<char>st;
   string s;cin>>s;

   for(int i=0;i<s.length();i++){
    if(s[i]=='(')st.push(s[i]);
    else{
        if( !st.empty()&& st.top()=='('){
            st.pop();
        }
        else st.push(s[i]);
    }
   }

   int a=0;
   int b=0;

   while(!st.empty()){
    if(st.top()=='(')a++;
    else b++;

    st.pop();
   }

   if(a!=0 && b!=0)continue;
   else if(a==0 && b==0)y++;
   else m[{a,b}]++;
}

count=count+y/2;

for(auto i:m){
    if(i.first.first!=0){
        if(m.find({i.first.second,i.first.first})==m.end())continue;
        else{
            int x=min(i.second,m[{i.first.second,i.first.first}]);
            count=count+x;
            i.second=i.second-x;
            m[{i.first.second,i.first.first}]= m[{i.first.second,i.first.first}]-x;
        }
    }
}

cout <<count<<endl;
 
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