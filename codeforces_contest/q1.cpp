#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){


		int n,m;
		cin >>n>>m;
		int arr1[n];
		int arr2[m];

		for(int i=0;i<n;i++)
			cin >>arr1[i];

		for(int i=0;i<m;i++)
			cin >>arr2[i];

		int count =0;
  //       int i=0,j=0;
		// while(i!=n && j!=m)
		// {
		// 	if(arr1[i]>arr2[j])
		// 		j++;

		// 	if(arr1[i]<arr2[j])
		// 		i++;

		// 	if(arr1[i]==arr2[j])
		// 		{
		// 			count++;
		// 			i++;
		// 			j++;
		// 		}
		// }
		// cout<< count<<endl;

		 vector<int> v(n + m); 
    vector<int>::iterator it, st; 

  
    it = set_intersection(arr1, arr1 + n, 
                          arr2, arr2 + m, 
                          v.begin());

 for (st = v.begin(); st != it; ++st) 
        count++;
    
    cout <<count<<endl;

	}
}