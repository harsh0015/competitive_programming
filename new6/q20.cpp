#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;

	while(t--){

		int n;cin>>n;

		int two=0,three=0;

		while(n%2==0){
			two++;
			n=n/2;
		}
		while(n%3==0){
			three++;
			n=n/3;
		}

		if(n!=1){
			cout <<-1<<endl;
		}
		else{
			if(two>three){
				cout <<-1<<endl;
			}
			else if(two==three){
				cout <<two<<endl;
			}
			else {
				cout <<three-two +three <<endl;
			}
		}
	}
}