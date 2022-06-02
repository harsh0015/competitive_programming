#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >>n;
	int arr[n+1];
	for(int i=1;i<n+1;i++)
		cin >>arr[i];

	bool arr1[n+1];

	for(int i=1;i<n+1;i++)
		arr1[i]=false;


	int count=0;
	for(int i=n;i>=1;i--)
	{   cout << count <<endl;
		if(!arr1[i]){
			arr1[i]=true;
			count++;
			int t=i-1;
			int check=arr[i];
			while(t>0){
				
             if(arr[t]==check){
             	arr1[t]=true;
             	check=arr[t];
             	
             }
             t--;
			}

        
		}
	}
	cout <<count;
}