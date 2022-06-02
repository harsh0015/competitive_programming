#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ap=0,bp=0,s=1;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(ap==a&&bp==b)continue;
        if(ap==bp) ap++;;
        if(max(ap,bp)<=min(a,b))
        s+=min(a,b)-max(ap,bp)+1;
       ap=a;
       bp=b;
    }
    cout<<s;
    return 0;
}