#include<bits/stdc++.h>
using namespace std;


int ret(int n){
	if(n==1)return 0;

	return 1;
}
int main(){

	
		int n;cin>>n;
		string s ;cin>>s;

		int arr[n];

		for(int i=0;i<n;i++){
			if(s[i]=='B')arr[i]=0;
			else arr[i]=1;
		}
         
   //       for(int i=0;i<n;i++)cout <<arr[i]<<" ";

			// cout <<endl;


		vector<int>p;

		int arr1[n];

			for(int i=0;i<n;i++){
			arr1[i]=arr[i];
		}

		for(int i=n-1;i>0;i--){
			if(arr1[i]==0){
				
				p.push_back(i);
				arr1[i]=1;
				arr1[i-1]=ret(arr1[i-1]);
			}
		}

		// for(int i=0;i<n;i++)cout <<arr1[i]<<" ";

		// 	cout <<endl;
        
        bool flag1=true;

     for(int i=0;i<n;i++){
     	if(arr1[i]==0){
     		flag1=false;
     		break;
     	}
     }

     if(flag1){
     	cout <<p.size()<<endl;
     	for(int i=0;i<p.size();i++)cout<<p[i]<<" ";

     	cout <<endl;
     return 0;
     }


///
     	vector<int>neg;

		int arr2[n];

			for(int i=0;i<n;i++){
			arr2[i]=arr[i];
		}

		for(int i=n-1;i>0;i--){
			if(arr2[i]==1){
				arr2[i]=0;
				neg.push_back(i);
				arr2[i-1]=ret(arr2[i-1]);
			}
		}
		// for(int i=0;i<n;i++)cout <<arr2[i]<<" ";

		// 	cout <<endl;
        
        bool flag2=true;

     for(int i=0;i<n;i++){
     	if(arr2[i]==1){
     		flag2=false;
     		break;
     	}
     }

     if(flag2){
     	cout <<neg.size()<<endl;
     	for(int i=0;i<neg.size();i++)cout<<neg[i]<<" ";

     	cout <<endl;
     return 0;
     }
     
     if(!flag1 && !flag2)cout <<-1<<endl;

	}
