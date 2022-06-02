#include <iostream>
using namespace std;
const int N=1e6;
#include<bits/stdc++.h>
int a[N],b[N];
int main() {
    // your code goes here
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=m;j++){
        cin>>b[j];
    }
    int ans=0;
    for(int i=1,j=1;i<=n;i++){
        while(b[j]<a[i]&&j<=m)j++;
        if(j==m+1)ans=max(ans,a[i]-b[m]);
        else if(j==1)ans=max(ans,b[1]-a[i]);
        else ans=max(ans,min(a[i]-b[j-1],b[j]-a[i]));
    }
    cout<<ans<<endl;
    return 0;
}

                                                                                