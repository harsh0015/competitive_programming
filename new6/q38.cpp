#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)cin>>arr[i];

	int sol[n][n];

    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		sol[i][j]=0;

    for(int i=0;i<n;i++){
    	int count=arr[i];
        int x=i,y=i;
    	while(count>0){
    		
    		if(count==arr[i]){
    			sol[x][y]=arr[i];
    			count--;
    			continue;
    		}
    		if(sol[x][y-1]==0 && y>0){
    			sol[x][y-1]=arr[i];
    			y--;
    			count--;
    			continue;
    		}
    		if(sol[x+1][y]==0 && x<n-1){
    			sol[x+1][y]=arr[i];
    			x++;
    			count--;
    			continue;
    		}

    	}
    }

    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    		if(i>=j)
    		cout <<sol[i][j]<<" ";

    	cout <<endl;
    }
}