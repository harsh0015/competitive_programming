#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){

		int n;cin >>n;

		// int arrR[n+1];
		// int arrB[n+1];

		// for(int i=1;i<n+1;i++){
  //      cin >>arrR[i]>>arrB[i];
		// }

		string strR;
		string strB;

    cin >>strR>>strB;
		int countr=0;
		int countb=0;
        

		for(int i=0;i<n;i++){
       if(strR[i]>strB[i])
       	countr++;

       if(strR[i]<strB[i])
       	countb++;

		}

		if(countr > countb)
			cout <<"RED"<<endl;

		if(countr < countb)
			cout <<"BLUE"<<endl;

		if(countr==countb)
			cout <<"EQUAL"<<endl;


	}
}