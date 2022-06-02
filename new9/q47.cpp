#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int cnt=0;
    for(int i=0;i<1<<n;i++){
        int mx=-1;
        int mn=1000000;
        int sum=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sum+=ans[j];
                mx=max(mx,ans[j]);
                mn=min(mn,ans[j]);
            }
        }
        if(sum>=l && sum<=r && mx-mn>=x){
            cnt++;
        }
    }
    cout<<cnt;
}
