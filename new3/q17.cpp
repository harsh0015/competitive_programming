#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		double m,h;cin >>m>>h;

		double bmi=m/pow(h,2);

		if(bmi<=18)cout <<1<<endl;
		else if(bmi>18 && bmi<=24)cout <<2<<endl;
		else if(bmi>24&& bmi<=29)cout <<3<<endl;
		else cout <<4<<endl;
	}
}