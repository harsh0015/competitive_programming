#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long
ll n,m,q;
ll gcd(ll x,ll y)
{
    return y==0?x:gcd(y,x%y);
}
int main()
{
    cin>>n>>m>>q;
    ll g=gcd(n,m);
    for(int i=1;i<=q;i++)
    {
        ll sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        ll area1,area2;
        if(sx==1)area1=(sy-1)/(n/g)+1;else area1=(sy-1)/(m/g)+1;
        if(ex==1)area2=(ey-1)/(n/g)+1;else area2=(ey-1)/(m/g)+1;
        if(area1!=area2)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}