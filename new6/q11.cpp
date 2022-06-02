#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){
		int g,p;cin>>g>>p;

		int arr[10];
		int day=0;

		for(int i=0;i<10;i++)cin>>arr[i];
         
         int sum1=0;

     for(int i=9;i>=g;i--)sum1=sum1+arr[i];

     	int sum2=sum1+arr[g-1];
        sum1++;
        int h,k;

        if(sum1%p==0){
          h=sum1/p;
        }
        else h=sum1/p+1;

         if(sum2%p==0){
          k=sum2/p;
        }
        else k=sum2/p+1;
   
     cout <<h<<" "<<k<<endl;

	}
}