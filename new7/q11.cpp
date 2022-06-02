#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m=1;
        cin>>n;
        int s[n+5],a[n+5];
        for(int i=1;i<=n;i++){
            cin>>s[i];
            a[i]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=i+i;j<=n;j+=i){
                if(s[j]>s[i]){
                    a[j]=max(a[j],a[i]+1);
                    m=max(m,a[j]);
                }
            }
        }
        cout<<m<<"\n";
    }
}