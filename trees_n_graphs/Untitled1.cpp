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
	
//	for( int i=1;i<n+1;i++)
//	cout << arr1[i]<<endl;
	for(int i=n;i>=1;i--)
	{  
	   
		if(!arr1[i]){
//			cout <<"yes";
			arr1[i]=true;
			count++;
			int t=arr[i];
			int check=arr[i];
			while(t>0){
				
             if(t==check){
             	arr1[t]=true;
             	check=arr[t];
             	t=arr[t];
             }
             else
             break;
			}

        
		}
		 
	}
	cout <<count;
}
