#include<bits/stdc++.h>
using namespace std;
int arr[101];
int arr1[101];

void solve(int p,int l,int r){
     
     if(l>r)return;
     if(l==r){
     	arr1[l]=p;
     	return ;
     }

     int max=0;

     int in;

     for(int i=l;i<=r;i++){
     	if(arr[i]>max){max=arr[i];in=i;}
     }
    // cout <<"("<<in<<")";
    arr1[in]=p;

    solve(in,l,in-1);
    solve(in,in+1,r);

}

int main(){

	int t;cin >>t;

	while(t--){
		int n;
		cin >>n;

		
		for(int i=0;i<n;i++)
			cin >>arr[i];


		solve(-1,0,n-1);

 
		for(int i=0;i<n;i++)
			{
				int count=0;

				int var=arr1[i];

				while(var!=-1){
					count++;
					var=arr1[var];
				}

				cout <<count<<" ";
			}
			cout <<endl;

	}
}