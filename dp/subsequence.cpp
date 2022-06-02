#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin >>s1>>s2;
	int m=s1.length();
	int n=s2.length();

	int arr[m+1][n+1];
	
	for(int i=0;i<=m;i++)
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			arr[i][j]=0;
		   else if(s1[i-1]==s2[j-1])
		   	arr[i][j]=arr[i-1][j-1]+1;
		   else
		   	arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
		}
		cout <<arr[m][n];
}