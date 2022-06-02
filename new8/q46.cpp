#include<bits/stdc++.h>
using namespace std;

int a[100005],sela[100005];

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(i<n)sela[i]=a[i+1]-a[i]-1;
    }
    sort(sela+1,sela+n);
    int ans=n;
    for(int i=1;i<=n-k;i++)ans+=sela[i];
    cout << ans << '\n';
    return 0;
}
                                                            