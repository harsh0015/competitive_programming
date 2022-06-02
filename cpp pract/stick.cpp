#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		long long x,y,z;
		cin >> x >>y >>z;
		if((z+(z*y)-1)%(x-1)==0)
			cout << (z+(z*y)-1)/(x-1) +z<<endl;
		else
			cout <<(z+(z*y)-1)/(x-1) +z +1<<endl;
	}
}