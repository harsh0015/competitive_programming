#include<bits/stdc++.h>
using namespace std;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,s;cin>>n>>s;

    if(s==0 || s>9*n){
         
         if(s==0 && n==1){
         	cout <<0 <<" "<<0<<endl;
         	return 0;
         }

    	cout <<-1<<" "<<-1<<endl;
    	return 0;
    }

    int arr1[n],arr2[n];

    //for max

    int h=s;

    for(int i=0;i<n;i++){
    	if(h<=9){
    		arr1[i]=h;
    		h=0;
    	}
    	else{
    		arr1[i]=9;
    		h=h-9;
    	}
    }

    //for min

    h=s-1;

    arr2[0]=1;

     for(int i=n-1;i>=0;i--){
    	if(h<=9){

    		if(i==0){
    			arr2[i]=arr2[i]+h;
    		h=0;
    		}
    		else{
    		arr2[i]=h;
    		h=0;
    	}
    	}
    	else{
    		arr2[i]=9;
    		h=h-9;
    	}
    }

    for(int i=0;i<n;i++){
    	cout <<arr2[i];
    }
    cout <<" ";
    for(int i=0;i<n;i++){
    	cout <<arr1[i];
    }
	
}