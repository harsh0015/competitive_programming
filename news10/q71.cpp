#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<map>
#include<cstring>
#include<string>
#include<queue>
#include<set>
using namespace std;
typedef long long LL;
typedef pair<int,int> PII;
int t;
int n0,n1,n2;
int main(){
    cin>>t;
    while(t--){
        cin>>n0>>n1>>n2;
        if(n1==0){
            if(n2==0){
                for(int i=1;i<=n0+1;i++)cout<<0;
                cout<<endl;
            }
            else{
                for(int i=1;i<=n2+1;i++)cout<<1;
                cout<<endl;
            }
            continue;
        }
        for(int i=1;i<=n0+1;i++)cout<<0;
        for(int i=1;i<=n2+1;i++)cout<<1;
        for(int i=1;i<=n1-1;i++){
            if(i&1)cout<<0;
            else cout<<1;
        }
        cout<<endl;
    }
    return 0;
}