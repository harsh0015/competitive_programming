#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){

		int arr[3];
		for(int i=0;i<3;i++)
			cin >>arr[i];

		sort(arr,arr+3);

		int sum=0;

		for(int i=0;i<3;i++)
			sum=sum+arr[i];

		if(sum%9!=0){

			cout << "NO"<<endl;
			continue;
		}
       else{
		if(arr[0]>=sum/9)
		{
			cout << "YES"<<endl;
			continue;
		}
		else cout <<"NO"<<endl;
	}



			}
}