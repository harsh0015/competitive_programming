#include<bits/stdc++.h>
using namespace std;

int main(){
	long long  n;
	cin >>n;
	for(long long  i=0;i<n;i++){

long long  x,y;
cin >> x>>y;
std::vector<long long > v;
for(long long  j=0;j<x;j++){
	long long a; 
	cin >>a;
	v.push_back(a);}
 //  cout << "##"<<endl;
 //  for(int l=0;l<x;l++){
 //  	cout << v[l]<<" ";
 //  }
 // cout << "##"<<endl;
// cout << "##"<<count(v.begin(), v.end(),3)<<"##"<<endl;

	std::vector<long long > v1;
	std::vector<long long > v2;
	std::vector<long long > v3;
for(long long  k=0;k<x;k++){

		if(count(v1.begin(), v1.end(),y-v[k])){
			v2.push_back(v[k]);
			v3.push_back(0);
			// cout <<"#";
		}
		else{
			v1.push_back(v[k]);
			v3.push_back(1);
		}
	}
	for(long long j=0;j<x;j++)

	{
		cout << v3[j]<<" ";
	}
	cout << endl;
}
}