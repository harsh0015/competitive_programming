#include<bits/stdc++.h>
using namespace std;

int main (){

	int n;
	cin >>n;

	int a1,a2,a3;
	cin >>a1>>a2>>a3;

	int b1,b2,b3;
	cin >> b1>>b2>>b3;

	int min,max;

// for min

	int count_min=0;
	if(b3>=a1){
		count_min=count_min + a1;
	}
	else{
         count_min=count_min + b3;
	  }
	  if(b1>=a2){
		count_min=count_min + a2;
	}
	else{
         count_min=count_min + b1;
	  }
	  if(b2>=a3){
		count_min=count_min + a3;
	}
	else{
         count_min=count_min + b2;
	  }


	 // for max

int count_max=0;

	  if(a1>=b2){
		count_max=count_max + b2;
	}
	else{
         count_max=count_max + a1;
	  }
	  if(a2>=b3){
		count_max=count_max + b3;
	}
	else{
         count_max=count_max + a2;
	  }
	  if(a3>=b1){
		count_max=count_max + b1;
	}
	else{
         count_max=count_max + a3;
	  }


	  // result
	  cout << count_min<<" "<<count_max;

}