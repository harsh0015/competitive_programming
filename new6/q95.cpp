#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>d;
    while(d--)
    {
        cin>>a;
        long long ar[a];
        long long sum=0,ma=0,su=0;
        for(int i=0; i<a; i++)
        {
            cin>>ar[i];
            su+=ar[i];
        }
        for(int i=1; i<a; i++)
        {
            sum=max(ar[i],sum+ar[i]);
            ma=max(ma,sum);
        }
        sum=0;
        for(int i=0; i<a-1; i++)
        {
            sum=max(ar[i],sum+ar[i]);
            ma=max(ma,sum);
        }
        if(su>ma)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}