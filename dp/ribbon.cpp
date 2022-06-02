// #include<bits/stdc++.h>
// using namespace std;

// int main (){
// 	int n,a,b,c;
// 	cin >>n>>a>>b>>c;
//    vector<int>v;
//    v.push_back(a);
//    v.push_back(b);
//    v.push_back(c);

//    vector<int> ::iterator ip;
//    ip=unique(v.begin(), v.end());
//    v.resize(distance(v.begin(),ip));
     
//      int arr[n+1];
//      for(int i=1;i<n+1;i++)
//      	arr[i]=0;

// 	sort(v.begin(),v.end());
// 	if (v.size()==1)
// 		cout << n/v[0];
	
// 	else{
// 		int sum=0;
// 	for(int i=0;i<v.size();i++)
// 		 sum=sum+v[i];

//   // cout << "sum:"<<sum<<endl;

// 	for(int i=0;i<v.size();i++)
// 	{

// 		int count=1;
// 		int count2=0;
// 		if(sum-v[i]==v[i]){
// 			count2=2;
// 			// cout<<"count2:"<<count2<<endl;
// 		}
// 		int count3=0;
// 		int countl=0;
// 		for(int j=0;j<v.size();j++)
// 		{   count3=0;
// 			if(i!=j){
// 				if(v[i]%v[j]==0){
// 					count3=v[i]/v[j];
// 					// cout<<"count3:"<<count3<<endl;
// 					if(count3>countl)
// 						countl=count3;
// 				}
// 			}
// 		}
// 		// cout<<"for:"<<v[i]<<endl;
// 		// cout << count<<"#"<<count2<<"#"<<countl<<endl;
// 		// cout<< "max:"<<max(max(count,count2),countl)<<endl;
//        arr[v[i]]=max(max(count,count2),countl);
//        // cout << arr[v[i]]<<endl;

// 	}

// 	// cout << "#"<<arr[6]<<"#"<<endl;

//     for(int i=v[v.size()-1]+1;i<n+1;i++){
//          if(v.size()==2){
//          	if(arr[i-v[0]]!=0 || arr[i-v[1]]!=0  ){
//          	arr[i]=max(arr[i-v[0]],arr[i-v[1]])+1;}
//          }
//          if(v.size()==3){
//          	if(arr[i-v[0]]!=0 || arr[i-v[1]]!=0 || arr[i-v[2]]!=0){
//          	// cout <<"max:"<<arr[i-v[0]]<<" "<<arr[i-v[1]]<<" "<<arr[i-v[2]]<<endl;
//          	arr[i]=max(max(arr[i-v[0]],arr[i-v[1]]),arr[i-v[2]])+1;}
//          }

//     }
//     cout <<arr[n];
// }
// }




#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,a,b,c,s=1,k;
cin>>n>>a>>b>>c;
 
for(int i=0;i<=n;i++)
for(int j=0;j<=n;j++)
{
k=n-a*i-b*j;
 
	if(k>=0&&k%c==0){
	s=max(s,(i+j+k/c));
	}
}
cout<<s;
}

