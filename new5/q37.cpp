#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n;
    cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            count++;
        }
        if(count%2==0||count==1)
        cout<<"BOB\n";
        else
        cout<<"ALICE\n";
        
    }
    return 0;
}
