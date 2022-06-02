#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll num = sqrt((2*n -1));
        if(num%2==0)
            num--;
        cout<<(num)/2<<"\n";
 
    }
    return 0;
}
 
