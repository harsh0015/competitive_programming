#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int>v;

	for(int i=0;i<10;i++)v.push_back(i);

		  std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 10); //          ^
  up= std::upper_bound (v.begin(), v.end(), 6); //                   ^

  std::cout << "lower_bound at position " << v[(low- v.begin())] << '\n';
  std::cout << "upper_bound at position " << v[(up - v.begin())] << '\n';

}