#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
 
    while(t--){
 
        long long int n,i;
        cin>>n;
 
        long long int a[n];
 
        for(i=0;i<n;i++){
            cin>>a[i];
        }
 
        map<long long int,long long int>mp;
         mp[a[0]]++;
        for(i=1;i<n;i++){
            if(a[i]==a[i-1]){
                continue;
            }
        mp[a[i]]++;
        }
 
        for(auto &x:mp){
            x.second++;
        }
 
        mp[a[0]]--;
        mp[a[n-1]]--;
 
        if(mp.size()==0){
            cout<<0<<endl;
        }else{
            long long int ans=1e9;
            for(auto x:mp){
                ans = min(ans, x.second);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
 
}