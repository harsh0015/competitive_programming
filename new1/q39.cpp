#include<bits/stdc++.h>
using namespace std;
int opp(int a){
	if(a==1)
		return 0;

	else return 1;
}

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		string s;
		cin >>s;

		int arr[n];

		for(int i=0;i<n;i++){
			if(s[i]=='1')arr[i]=1;
			else arr[i]=0;
		}

		int ans=0;

		for(int i=1;i<n-1;i++){
         if(arr[i]==arr[i-1]){
           int c=opp(arr[i]);
            
            if(i<n-2){
           for(int j=i+1;j<n;j++)
           {
           	if(arr[j]==c &&arr[j+1]==c)
           	{
           		reverse(arr+i,arr+j+1);
           		ans++;
           		break;
           	}
           	if(j==n-1) {
           		reverse(arr+i,arr+n);
           		ans++;
           		break;
           	}
           }
         }
          else{
     	ans++ ;
     	break;
     }
     }


		}

		cout <<ans <<endl;
	}
}