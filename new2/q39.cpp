#include<bits/stdc++.h>
using namespace std;

int main(){

	double x,y,r;
	cin >>x>>y>>r;

	int count =0;

	int x1=ceil(x-r);
	int x2=floor (x+r);

	int y1=ceil(y-r);
	int y2=floor(y+r);

	for(int i=x1;i<=x2;i++){
		for(int j=y1;j<=y2;j++){
			if(double(sqrt(double(i)*double(i)+double(j)*double(j)))<=r)count++;
		}
	}

	cout <<count;
}