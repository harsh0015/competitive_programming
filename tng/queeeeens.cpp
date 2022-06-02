// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >>n;

// 	int arr[n+1];
// 	int arr1[n+1];
// 	for(int i=1;i<n+1;i++){

		
// 		cin >>arr[i];
// 	   cin >>arr1[i];
// 	}
//     vector<int>ans;
// 	bool flag=true;
// int rem=1;
// 	while(flag)
// 	{  


// 		for(int i=1;i<n+1;i++)
// 		{
//           bool c=false;
//          if(arr1[i]==1){
//       	for(int j=1;j<n+1;j++)
//       	{
//       		if(arr[j]==i){
//       			if(arr1[j]==0){
//       				c=true;
//       				break;
//       		                  }
//       	                 }
//         }
//         if(c){
//         	continue;
//         }
//         else{
//         	ans.push_back(i);
//         	arr[i]=n+1;
//         	arr1[i]=2;
//            for(int k=1;k<n+1;k++){
//            	if(arr[k]==i)
//            		arr[k]=arr[i];
//            }
           
//         }
// 	   }//end of if
	  
// 		if(i==n)
// 			flag=false;

// 		// cout <<"#"<<i<<"#";
// 		}//end of for

// 		// cout <<"heloo"<<endl;
// 	}//end of while
    



//      if (ans.size()==0)
//      	cout <<-1;
//      else
//     for(int i=0;i<ans.size();i++)
//     	cout << ans[i]<<" ";

// }
#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int v,k;
		cin >> v >> k;
		if(k==0){
			a[v]=a[i+1]=1;
		}
	}
	int flag=1;
	for(int i=1;i<=n;i++){
		if(a[i]==0) {
			cout << i << " ";
			flag=0;	
		}
	}
	if(flag){
		cout << -1 << endl;
	}
} 