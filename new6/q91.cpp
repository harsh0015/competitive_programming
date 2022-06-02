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

char rev(char c){
    if(c=='R')return 'W';
    else return 'R';
}

void solve(){
 
 int n,m;cin>>n>>m;

 char arr[n+1][m+1];
 bool flag=false;

 int a,b;

 for(int i=0;i<n;i++){
    string s;cin>>s;

    for(int j=0;j<m;j++){

        if(s[j]!='.'){
          flag=true;
          a=i;b=j;
        }
        arr[i][j]=s[j];
    }
 }

if(!flag){
    cout <<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0)cout<<"R";
            else cout <<"W";
        }
        cout <<endl;
    }

}
 
 else{
    
    char arr2[n][m];
     
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==(a+b)%2)arr2[i][j]=arr[a][b];
            else arr2[i][j]=rev(arr[a][b]);
        }
      
    }

    bool fl=true;


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(arr[i][j]!='.' && arr[i][j]!=arr2[i][j]){
            fl=false;
            break;
           }
        }
      
    }

    if(!fl){
        cout <<"NO"<<endl;
    }
    else{
        cout <<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr2[i][j];
            
        }
        cout <<endl;
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