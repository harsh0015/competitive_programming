#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() {
	int k=0,ans=0,count=0,f2=0;
	cin>>count;
	
	for(int i=2;i<10000000;i++)
	{
	    ans=0;
	    for(int j=2;j*j<=i;j++)
	    {
	        if(i%j==0)
	        {
	            ans=1;
	            break;
	        }
	    }
	    if(ans==0)
	    {
	        count--;
	        cout<<i<<" ";
	    }
	    if(count==0)
	    {
	       break;
	    }
	}
	
}
