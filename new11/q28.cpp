#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,s;
    cin>>n>>s;
    long long int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long int l=0,r=n,mid,need=0,cost=0,item=0;
    while(r>=l){
        need=0;
        mid=((l+r)/2);
        for(int i=0; i<n; i++){
            b[i]=a[i]+((i+1)*mid);
        }
        sort(b,b+n);
        for(int i=0; i<mid; i++){
            need+=b[i];
        }
        if(need<s){
            item=mid;
            cost=need;
            l=mid+1;
        }
        if(need>s){
            r=mid-1;
        }
        if(need==s){
            cout<<mid<<" "<<s;
            return 0;
        }
    }
    cout<<item<<" "<<cost;
}