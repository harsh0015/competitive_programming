#include<iostream>
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int result=0;
        int tt=0;
        if(s[0]=='0')
        {
            result++;
            tt=0;
        }
        int j=1;
        while(j<n)
        {
            if(s[j]=='1')
            {
                if(j-tt-k<=0)
                {
                    result--;
                }
                tt=j;
            }
            else
            {
                if(j-tt-k>0)
                {   result++;
                    tt=j;
                }
            }
            j++;
        }
        cout<<result<<endl;
    }
    return 0;
}
