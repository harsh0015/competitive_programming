#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;cin >>n;

	int arr1[n];
	int arr2[n];

	for(int i=0;i<n;i++)
		cin >>arr1[i]>>arr2[i];

	int count =0;

	for(int i=0;i<n;i++){

		for(int j=i+1;j<n;j++){
			if(float(arr2[j]-arr2[i])/float(arr1[j]-arr1[i])<=1 &&float(arr2[j]-arr2[i])/float(arr1[j]-arr1[i])>=-1)
				count ++;

		}


	}
	cout <<count;
}