#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;

	int arr[n+1];
	int arr1[n+1];
	for(int i=1;i<n+1;i++){
		
		cout <<i;
		cin >>arr[i];
	   cin >>arr1[i];
	}
    vector<int>ans;
	bool flag=true;

	while(flag)
	{  cout <<"h";


		for(int i=1;i<n+1;i++)
		{
          bool c=false;
         if(arr1[i]==1){
      	for(int j=1;j<n+1;j++)
      	{
      		if(arr[j]==i){
      			if(arr1[j]==0){
      				c=true;
      				break;
      		                  }
      	                 }
        }
        if(c){
        	continue;
        }
        else{
        	ans.push_back(i);
        	arr[i]=n+1;
        	arr1[i]=2;
           for(int k=1;k<n+1;k++){
           	if(arr[k]==i)
           		arr[k]=arr[i];
           }
           
        }
	   }//end of if
	   cout <<"hey";
		if(i==n)
			flag=false;
		}//end of for
	}//end of while
    
    for(int i=0;i<ans.size();i++)
    	cout << ans[i]<<" ";

}
