#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int mod=1000000007;
ll int inf=100000000000000000;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        if(n==1)
        cout<<"FastestFinger"<<endl;
        else if(n==2)
        cout<<"Ashishgup"<<endl;
        else if(n%2==1)
        cout<<"Ashishgup"<<endl;
        else{
            int cnt=0;
            int ans=0;
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    while(n%i==0)
                    {
                        n/=i;
                        if(i==2)
                        cnt++;
                        else
                        ans++;
                    }
                }
            }
            if(n>1)
            ans++;
            if(cnt==1)
            {
                if(ans>1)
                cout<<"Ashishgup"<<endl;
                else
                cout<<"FastestFinger"<<endl;
            }
            else{
                if(ans>0)
            cout<<"Ashishgup"<<endl;
            else
            cout<<"FastestFinger"<<endl;
        }
        }
    }
    return 0;
}