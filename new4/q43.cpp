#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++) 
#define fp(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=a;i>=b;i--)
string lcsubstr(string s1,string s2)
{
    int len1=s1.length(),len2=s2.length();
    int dp[2][len2+1];
    int curr=0,res=0,end=0;
    fp(i,0,len1)
    {
        fp(j,0,len2)
        {
            if(i==0 || j==0)
             dp[curr][j]=0;
            else if(s1[i-1]==s2[j-1])
            {
                dp[curr][j]=dp[1-curr][j-1] + 1;
                if(res<dp[curr][j])
                {
                    res=dp[curr][j];
                    end=i-1;
                }
            }
            else
            {
                dp[curr][j]=0;
            }
        }
        curr=1-curr;
    }
    if(res==0)
        return "0";
    string ans;
    ans=s1.substr(end-res+1,res);
    return ans;
}
int main()
{

    int t;cin >>t;

    while(t--){
    string s1,s2;
    cin >> s1 >> s2;
    string ans=lcsubstr(s1,s2);

   if(ans!="0")
        cout << s1.length()+s2.length()-2*ans.length() << endl;
    else
        cout << s1.length()+s2.length()<< endl;
    
}
   
}