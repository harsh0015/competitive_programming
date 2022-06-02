// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int t;
// 	cin >>t;
// 	while(t--){

// 		int n;
// 		cin >>n;
// 		vector<int>v;
// 		for(int i=0;i<n;i++){
// 			int a ;
// 			cin >>a;
//              v.push_back(a);
// 		}
// 		sort(v.begin(),v.end());
// 		int count=0;
// 		for(int i=n-1;i>=0;i--){
// 			if(i-v[i]+1>=0){
// 				count ++;
// 				i=i-v[i]+1;
// 			}

// 		}

// 		int count2=0;

// 		for(int i=0;i<n-1;i++){
//         if(v[i+v[i] -1]==v[i]){
//         	count2++;
//         	i=i+v[i]-1;
//         }
// 		}
// 		cout <<max(count,count2) <<endl;
// 	}
// }
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],ans=0,k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		k=-1;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=i-k)
			{
				k=i;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
