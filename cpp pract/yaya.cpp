#include<bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >>n;

	for(int i=0;i<n;i++){

		int a,b,c,d;
		cin >>a>>b>>c>>d;

		if((a+b)%2!=0){
			if(a+d!=0 & b+c==0)
				cout << "Ya Tidak Tidak Tidak";
			if(a+d==0 & b+c!=0)
				cout << "Tidak Ya Tidak Tidak";
			if(a+d!=0 & b+c!=0)
				cout << "Ya Ya Tidak Tidak";
		}
		else{
			if(a+d!=0 & b+c==0)
				cout << "Tidak Tidak Tidak Ya";
			if(a+d==0 & b+c!=0)
				cout << "Tidak Tidak  Ya Tidak";
			if(a+d!=0 & b+c!=0)
				cout << "Tidak Tidak Ya Ya";
		}
		cout << endl;
	}
}