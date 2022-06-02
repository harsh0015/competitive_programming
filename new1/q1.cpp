#include <iostream>
using namespace std;
 
int main() {
	int t,x,k,i,s;
	cin>>t;
	while(t--)
	{
		cin>>x;
		s=0;
		i=0;
		while(s<x)
		{
			i++;
			s=s+i;
		}
		if(s==x)
		cout<<i;
		else
		{
			if((s-x)==1)
			{
				cout<<(i+1);
			}
			else
			cout<<i;
		}
		cout<<"\n";
	}
	return 0;
}