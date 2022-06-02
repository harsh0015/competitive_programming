#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
void solve()
{
    int n,l;
    cin>>n>>l;
    for(int i = 0;i<n;i++)
    {
        int a,flag = 0;
        cin>>a;
        while(a>0)
        {
            int tmp = a;
            while(tmp !=0)
            {
                int dig = tmp % 10;
                tmp /=10;
                if(dig==l)
                flag = 1;
                if(flag == 1)
                break;
            }
            a-=l;
            if(flag==1)
            break;
        }
        if(flag==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}
