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
    vector<int>v1(n+1),v2(n+1);
    for(int i=1;i<n+1;i++)cin>>v1[i];

     for(int i=1;i<n+1;i++)cin>>v2[i];

        int r=0;
    for(int i=1;i<n+1;i++){
        if(v1[i]==i){
            
            r=i;
            break;
        }
    }


    if(v2[1]!=v1[r]){
        cout <<-1<<endl;
        return;
    }

    vector<int>ans(n+1);
    
    for(int i=1;i<n+1;i++){
        ans[i]=-1;
    }
   
    ans[r]=0;
    int m=0;
    for(int i=2;i<n+1;i++){
       
        if(ans[v1[v2[i]]]==-1){
            cout <<-1<<endl;
            return;
        }
        else{
            ans[v2[i]]=m+1;
            m++;
           
        
       }
    }

    vector<int>final(n+1);

    

    for(int i=1;i<n+1;i++){
        final[i]=ans[i]-ans[v1[i]];
    }

     for(int i=1;i<n+1;i++){
        cout <<final[i]<<" ";
    }
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