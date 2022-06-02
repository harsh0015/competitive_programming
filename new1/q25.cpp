#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
   int t;
   cin>>t;
 while (t--)
	{
	    int a,b,p,i,c;
		cin>>a>>b>>p;
		string s;
		cin>>s;
		for (i=s.length()-2,c=0; i>=0; --i)
		{
			if (c!=s[i])
			{
				c=s[i];
				p-=(c=='A'? a: b);
				if (p<0) break;
			}
		}
		cout<<i+2<<endl;
	}
   return 0 ;
}