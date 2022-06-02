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

 int a,b,c,d;

 for(int i=1;i<=n;i++){
    string s;cin>>s;

    if(i==1){
        if(s[1]=='1')
            a=1;
        else a=0;   
    }
     if(i==2){
        if(s[0]=='1')
            b=1;
        else b=0;   
    }

     if(i==n){
        if(s[n-2]=='1')
            d=1;
        else d=0;   
    }

     if(i==n-1){
        if(s[n-1]=='1')
            c=1;
        else c=0;   
    }
 }
 

 if(a==b){
    int count=0;
    if(a==c && a==d){
        cout <<2<<endl;
        cout <<n<<" "<<n-1<<endl;
        cout <<n-1<< " "<<n<<endl; 
    }
    if(a==c && a!=d){
        cout <<1<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
     if(a!=c && a==d){
        cout <<1<<endl;
        cout<<n<<" "<<n-1<<endl;
    }
    if(a!=c && a!=d){
        cout <<0<<endl;
    }
 }
 else{
    if(c==d){
        if(a==c && b!=c){
        cout <<1<<endl;
        cout<<1<<" "<<2<<endl;
    }
     if(a!=c && b==c){
        cout <<1<<endl;
        cout<<2<<" "<<1<<endl;
    }
    if(c!=a && c!=b){
        cout <<0<<endl;
    }
 
    }
    else{
        if(a==c){
            cout <<2<<endl;
        cout <<2<<" "<<1<<endl;
        cout <<n-1<< " "<<n<<endl; 
        }
        if(a==d){
            cout <<2<<endl;
        cout <<2<<" "<<1<<endl;
        cout <<n<< " "<<n-1<<endl; 
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