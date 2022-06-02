#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, k, j, x, cnt, y;
    cin>>n>>m;
    vector<int>v1[m+1], v2(n+1,0);
    for(i=0;i<n;i++){
        cin>>x>>y;
        v1[x].pb(y);
    }
    for(i=1;i<=m;i++){
        sort(v1[i].begin(),v1[i].end(),greater<int>());
        for(cnt=1;cnt<v1[i].size();cnt++)
            v1[i][cnt]+=v1[i][cnt-1];
       /* for(cnt=0;cnt<v1[i].size();cnt++)
            cout<<v1[i][cnt]<<" ";
        cout<<"\n";*/
        for(j=0;j<v1[i].size();j++){
            //k=v1[i][j]+v2[j+1];
            v2[j+1]=max(v1[i][j]+v2[j+1],v2[j+1]);
        }
    }
    sort(v2.begin(),v2.end(),greater<int>());
    /*for(cnt=0;cnt<v2.size();cnt++)
            cout<<v2[cnt]<<" ";
        cout<<"\n";*/
    k=v2[0];
    cout<<k<<endl;
}
