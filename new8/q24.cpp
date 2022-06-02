#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=200005;
ll a[N];

int main(){
    ll n;
    cin>>n;
    char ch;
    ll l=1,r=0,no;
    while(n--){
        cin>>ch>>no;
        if(ch=='L')
        {
            --l;
            a[no]=l;
        }
        else if(ch=='R')
        {
            ++r;
            a[no]=r;
        }
        else
        {
            cout << min(a[no]-l,r-a[no]) << endl;
        }
 
    }
    return 0;
}