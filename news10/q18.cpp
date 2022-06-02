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

    // cout <<char('a'+0)<<" "<<char('a'+1)<<" "<<char('b'+2)<<endl;

    int n;cin>>n;
     int q;cin>>q;
    
  string s;cin>>s;



    while(q--){
        int a,b;cin>>a>>b;

        int ans=INT_MAX;

        string st=s.substr(a-1,b-a+1);
       

        string s1;

        s1="";
        s1=s1+char('a'+0) +char('a'+1)+char('a'+2);

        int count=0;

        for(int i=0;i<st.length();i++ ){
           if(st[i]!=s1[i%3])count++;
        }

        ans=min(ans,count);

        count=0;

        s1="";
        s1=s1+char('a'+0) +char('a'+2)+char('a'+1);

        for(int i=0;i<st.length();i++ ){
           if(st[i]!=s1[i%3])count++;
        }

        ans=min(ans,count);

         count=0;

        s1="";
        s1=s1+char('a'+1) +char('a'+2)+char('a'+0);

        for(int i=0;i<st.length();i++ ){
           if(st[i]!=s1[i%3])count++;
        }

        ans=min(ans,count);

         count=0;

        s1="";
        s1=s1+char('a'+1) +char('a'+0)+char('a'+2);

        for(int i=0;i<st.length();i++ ){
           if(st[i]!=s1[i%3])count++;
        }

        ans=min(ans,count);

         count=0;

        s1="";
        s1=s1+char('a'+2) +char('a'+1)+char('a'+0);

        for(int i=0;i<st.length();i++ ){
           if(st[i]!=s1[i%3])count++;
        }

        ans=min(ans,count);

         count=0;

        s1="";
        s1=s1+char('a'+2) +char('a'+0)+char('a'+1);

        for(int i=0;i<st.length();i++ ){
           if(st[i]!=s1[i%3])count++;
        }

        ans=min(ans,count);

cout <<ans<<endl;

    }



}
 
 
int main(){
    fastio;
 
    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}