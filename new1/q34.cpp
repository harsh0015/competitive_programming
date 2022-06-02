#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int n,k;cin >>n>>k;

		string s;cin >>s;

		char arr[n+2];

		for(int i=0;i<n+2;i++)
			arr[i]=s[i];

		for(int i=1;i<=n;i++){
			int pt=-1;
			for(int j=0;j<n;j++)
			{
				if(arr[j]=='W')
				{
					if(pt==-1){
						
					}
					else{
						if(j-pt-1==i)
						{
							for(int k=pt;k<=j;k++)
								arr[k]='W';

							
						}

					}
					pt=j;
				}
			}
            for(int i=0;i<n;i++)
            	cout <<arr[i];
		}
	}
}