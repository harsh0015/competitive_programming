#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll n,a,b,i=0,x;
    cin>>n>>a>>b;
    ll aa=a,bb=b;
    while((a>0 || b>0) && i<n){
        cin>>x;
        if(x&&a>0&&b<bb) a--,b++;
        else if(b>0) b--;
        else a--;
        i++;
    }
    cout<<i;
}