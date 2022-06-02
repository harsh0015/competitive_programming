#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;cin >>t;

	while(t--){
		int n;

		cin >>n;
    int count =0;
	for(int i=3;i<n;i++){
       // cout <<i <<" "<<i+1<<endl;
		count++;
	}
      
     float a=2.0;
     float b=float(n);

     while(ceil(b/a)!=1){
     	// cout << n<<" "<<2<<endl;
     	count++;
     	b=ceil(b/a);}

 // cout << n<<" "<<2<<endl;    
	cout <<count+1<<endl;

	for(int i=3;i<n;i++){
       cout <<i <<" "<<i+1<<endl;
	}
      
      a=2.0;
      b=float(n);

     while(ceil(b/a)!=1){
     	cout << n<<" "<<2<<endl;
     	b=ceil(b/a);}

     cout << n<<" "<<2<<endl;
	}
}