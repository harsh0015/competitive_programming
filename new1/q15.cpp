#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];
        int c11=0;
        int c10=0;
		for(int i=0;i<n;i++){
			int a;cin >>a;
			if(a%2==0){
				arr[i]=0;
				c10++;
			}

			else {arr[i]=1;
				c11++;}
		}

	  int arr1[n];
     int c20=0;
     int c21=0;

	  for(int i=0;i<n;i++){
	  	if(i%2==0){
				arr1[i]=0;
				c20++;}
			else {arr1[i]=1;
				c21++;}
	  }
       
      
       
       if(c21==c11 && c20==c10){
	  int count=0;

	  for(int i=0;i<n;i++){
	  	if(arr[i]!=arr1[i])
	  		count++;
	  }
     // cout <<"$"<<count <<endl;
	  if(count%2==1)
	  	cout <<-1<<endl;
	  else cout << count/2<<endl;}
	  else{
	  	cout <<-1<<endl;
	  }
	}
}