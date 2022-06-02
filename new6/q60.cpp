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

  string s;cin>>s;

  //for length 1;

  int count[26]={};

  for(int i=0;i<n;i++){
    count[s[i]-'a']=1;
  }

  for(int i=0;i<26;i++){
    if(count[i]==0){
        cout << (char)('a'+i)<<endl;
        return;
    }
  }

  //for lenght 2;

  set<string> st;

  for(int i=0;i<n-1;i++){
    string temp="";
    temp=temp+s[i];
    temp=temp+s[i+1];

    st.insert(temp);
  }

  for(int i=0;i<26;i++){
    for(int j=0;j<26;j++){
        string temp="";
        temp=temp+(char)('a'+i);
        temp=temp+(char)('a'+j);

        if(st.find(temp)==st.end()){
            cout <<temp<<endl;
            return ;
        }
    }
  }

  st.clear();

  //for size 3;

  for(int i=0;i<n-2;i++){
 string temp="";
    temp=temp+s[i];
    temp=temp+s[i+1];
    temp=temp+s[i+2];

    st.insert(temp);
  }


 for(int i=0;i<26;i++){
    for(int j=0;j<26;j++){
        string temp="a";
        temp=temp+(char)('a'+i);
        temp=temp+(char)('a'+j);

        if(st.find(temp)==st.end()){
            cout <<temp<<endl;
            return ;
        }
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