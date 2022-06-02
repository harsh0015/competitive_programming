#include<bits/stdc++.h>
using namespace std;

vector<int> fact (int n){

	vector<int >v;

	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			v.push_back(i);

			if( n/i!=i)
				v.push_back(n/i);
		}
		

	}
	return v;
}


int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n+1];
		int sum=0;


		for(int i=1;i<n+1;i++){
			cin >>arr[i];
			sum=sum+arr[i];
		}
       
     vector<int> v=fact(sum);

    sort(v.begin(), v.end());

    int ans=0;

    int c=0;

    for(int i=0;i<v.size();i++){
   
    	for(int j=1;j<n+1;j++){
    		if(arr[j]>v[i]){
    			
    			c++;
    			break;
    		}


    	}
    }

    for(int i=c;i<v.size();i++){
           bool flag=false;
    	for(int j=1;j<n+1;j++){
    		  
    		if(arr[j]<v[i])
    		{
    			int s=arr[j];
    			for(int k=j+1;k<n+1;k++){
    				if(s+arr[k]<v[i]){
    					s=s+arr[k];
    					ans++;


    					continue;

    				}
    				if(s+arr[k]==v[i]){
                      ans++;
                      j=k;
                      break;

    				}
    				if(s+arr[k]>v[i]){
    					ans=0;
    					flag=true;
    					break;
    				}
    			}
    		}//end of if
          
          if(arr[j]==v[i])
          	continue;
    	}
    	if(flag){
    		ans=0;
    		continue;
    	}
    	else break;
    }
  
  cout<<ans<<endl;

	}
}