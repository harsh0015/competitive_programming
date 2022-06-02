// #include<bits/stdc++.h>
// using namespace std;
// bool emp[10000001];
// bool exiti[1000001];

// void newDay(bool b){
     
//      for(int i=1;i<=1000000;i++){
//      	emp[i]=false;
//      	exiti[i]=false;
//      }
// }

// bool check(bool b){
// 	// cout <<"^";
// 	bool flag=true;

// 	for(int i=1;i<1000000+1;i++){
// 		if(emp[i]){
// 			// cout <<"("<<i<<")"<<endl;
// 			flag=false;
// 			break;
// 		}
// 	}

// 	if(flag) return true;
// 	else return false;
// }
// int main(){

// 	int n;cin >>n;

// 	int arr[n];

// 	for(int i=0;i<n;i++)cin >>arr[i];

// 	int count=0;
// vector<int >v;
// v.push_back(0);
// bool flag=true;
// newDay(true);

//   for(int i=0;i<n;i++){
//      // cout <<"*"<<arr[i]<<"*"<<endl;

//     if(arr[i]>0){
//     	if(exiti[arr[i]]){
//           count++;
//           // cout <<"#";
//           v.push_back(i);
//           if(check(true)){
//           	// cout <<"&";
//           	newDay(true);
//           }
//           else {
//           	flag=false ;
//           	break;
//           }
//     	}

//       if(emp[arr[i]]){
//       	flag=false;
//       	break;
//       }
//       else{
//       	emp[arr[i]]=true;
//       }
//     }

//     else {
//     	if(emp[abs(arr[i])]){
//     		exiti[abs(arr[i])]=true;
//     		emp[abs(arr[i])]=false;
//     	}
//     	else {
//     		flag=false;
//     		break;
//     	}
//     }
//   }

//   v.push_back(n);

//   if(flag){
//   	if(check(true)){
//   	cout <<count+1<<endl;
//   	for(int i=1;i<v.size();i++)cout <<v[i]-v[i-1]<<" ";}
//   		else cout <<-1;

//   }
//   else cout <<-1;

	
   
// }
#include<bits/stdc++.h> 
using namespace std;
#define ll long long
int main()
{
	map<int,int>mp;
	set<int>s;
	int cnt=0,k,i;
	int n;cin>>n;
	vector<int>vec;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k<0)
		{
			if(s.find(abs(k))==s.end())
			{cout<<-1;return 0;}
			else
			s.erase(abs(k));
			
			if(s.size()==0)
			{
				mp.clear();
				vec.push_back(2*cnt);
				cnt=0;
			}
		}
		else
		{
			if(mp[k]>0)
			{cout<<-1;return 0;}
			else
			{
				mp[k]++;
				s.insert(k);
				cnt++;
			}
		}
	}
	if(s.size()>0)
	{
		cout<<-1;return 0;
	}
	cout<<vec.size()<<"\n";
	for(i=0;i<vec.size();i++)
	cout<<vec[i]<<" ";
	
	
}
