#include <bits/stdc++.h>
using namespace std;
int t,n;
string str[11];
int main(){
    scanf("%d",&t);
    while(t--){
        map<string, int> mp;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            cin>>str[i];
            mp[str[i]]++;}
        int ans=0;
        for(int i=1;i<=n;i++){
            if(mp[str[i]]==1) continue;
            ans++;
            mp[str[i]]--;
            for(int j=0;j<=9;j++){
                str[i][0]='0'+j;
                if (mp[str[i]] == 0) {
                    mp[str[i]]++;
                    break;}}}
        cout<<ans<<endl; 
        for(int i=1;i<=n;i++)
            cout<<str[i]<<endl;}}