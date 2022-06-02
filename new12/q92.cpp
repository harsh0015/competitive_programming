#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<long long int>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using vpll =vector<pair<ll,ll>>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}

 ll ceel(ll a,ll b){
    if(a==0)return 0;
    if(a<0){
        if(-1*a%b==0)return a/b;
        return a/b ;
    }
    else{
        if(a%b==0)return a/b;
        else return a/b+1;
    }
 }
 
 ///
void solve(){
    
    string s;cin>>s;
    map<string ,int>m;
   
    for(int i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
         string s1=s.substr(i,2);
        string s2=s1;
        reverse(s1.begin(), s1.end());

        if(m.count(s1)==0 && m.count(s2)==0)m[s1]++;   
        }
        
    }
    vector<string>v;
    for(auto i:m)v.push_back(i.first);

    if(v.size()==0){
        cout <<"YES"<<endl;
        for(int i=0;i<26;i++){
            cout <<char('a'+i);
        }
        cout <<endl;
        return;
    }

       

    string keys=v[0];

     vector<bool>done(v.size(),false);
     v[0]=true;
     map<char,int>mp;
     mp[keys[0]]=1;
     mp[keys[1]]=1;
     int count=1;
     while(count<v.size()){
       
        bool flag1=false;
        for(int i=0;i<v.size();i++){
            if(!done[i]){
                string t=v[i];
                if(keys[0]==t[0]){
                    if(mp.find(t[1])!=mp.end()){
                        cout<<"NO"<<endl;
                        return;
                    }
                    else{
                        count++;
                        done[i]=true;
                        keys=t[1]+keys;
                        mp[t[1]]++;
                        flag1=true;
                        break;
                    }
                }
                if(keys[0]==t[1]){
                    
                     if(mp.find(t[0])!=mp.end()){
                        cout<<"NO"<<endl;
                        return;
                    }
                    else{
                        count++;
                        done[i]=true;
                        keys=t[0]+keys;
                        mp[t[0]]++;
                        flag1=true;
                        break;
                    }
                }
            }

        }
        ///
        if(flag1)continue;

           bool flag2=false;
        for(int i=0;i<v.size();i++){
            if(!done[i]){
                string t=v[i];
                if(keys[keys.size()-1]==t[0]){
                    if(mp.find(t[1])!=mp.end()){
                        cout<<"NO"<<endl;
                        return;
                    }
                    else{
                        count++;
                        done[i]=true;
                        keys=keys+t[1];
                        mp[t[1]]++;
                        flag2=true;
                        break;
                    }
                }
                if(keys[keys.size()-1]==t[1]){
                    
                     if(mp.find(t[0])!=mp.end()){
                        cout<<"NO"<<endl;
                        return;
                    }
                    else{
                        count++;
                        done[i]=true;
                        keys=keys + t[0];
                        mp[t[0]]++;
                        flag2=true;
                        break;
                    }
                }
            }

        }

        if(flag2)continue;

        cout <<"NO"<<endl;
        return;

     }
      cout <<"YES"<<endl;

      for(int i=0;i<26;i++){
        char c=char('a'+i);
        if(mp.count(c)==0){
            keys=keys+c;
        }
      }
     cout <<keys<<endl;
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
    
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}