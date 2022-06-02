#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        ll n , k;
        cin>>n>>k;
        
        n--;
 
        ll sum[n],a[n];
 
        cin>>sum[0];
        cin>>a[0];
 
        for(int i=1;i<n;i++){
            cin>>a[i];
            sum[i] = sum[i-1]+a[i-1];
 
        }
        ll ans =0;
 
        for(int i=0;i<n;i++){
            sum[i] += ans;
 
            ll temp = ceil((double)a[i]*100/k);
 
            if(temp>sum[i]){
                ans+= temp-sum[i];
            }
        }
 
        cout<<ans<<endl;
 
        
 
 
 
        //cout<<ans<<endl;
 
    }
    return 0;
}