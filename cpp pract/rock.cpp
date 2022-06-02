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



// for min

	int count_min=0;
	if(a1<=b3){
		count_min=count_min + a1;
		b3=b3-a1;
		a1=0;
	}
	else{
         count_min=count_min + b3;
         a1=a1-b3;
         b3=0;
	  }
	  if(a2<=b1){
		count_min=count_min + a2;
		b1=b1-a2;
		a2=0;
	}
	else{
         count_min=count_min + b1;
         a2=a2-b1;
         b1=0;
	  }
	  if(b2>=a3){
		count_min=count_min + a3;
		b2=b2-a3;
		a3=0;
	}
	else{
         count_min=count_min + b2;
         a3=a3-b2;
         b2=0;
	  }
     
     if(a1!=0){
     	count_min=count_min + (a1>=b1?b1:a1);
    }
    if(a2!=0){
     	count_min=count_min + (a2>=b2?b2:a2);
    }
    if(a3!=0){
     	count_min=count_min + (a3>=b3?b3:a3);
    }

	 
	  // result
	  cout << n-count_min<<" "<<count_max;

}
