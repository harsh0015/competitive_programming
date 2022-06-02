#include<bits/stdc++.h>
using namespace std;

string fun(string s,int n){


   string s1=s.substr(0,n);

   
	reverse(s1.begin(),s1.begin()+n);

	replace( s1.begin(), s1.end(), '1', '2');

	replace( s1.begin(), s1.end(), '0', '1');
	replace( s1.begin(), s1.end(), '2', '0');

   
	s.replace(0,n,s1); 

	return s;
}

int main(){

	int t;
	cin >>t;

	while(t--){


		int n;cin >>n;

		string a,b;
		cin >>a>>b;
		

		bool flag=true;
           
             vector<int > ans;
             int count ;
		while(flag){
			
			count=0;
			for(int i=n-1;i>=0;i--)
			{    
				count++;
				bool ch=false;
				if(a[i]!=b[i])


				{
					if(a[0]==a[i]){
						a=fun(a,i+1);
						ans.push_back(i+1);
						break;
					}

					else{  
					   if (i==1){
                       a=fun(a,1);
                         	ans.push_back(1);
                         	a=fun(a,i+1);
                         	ans.push_back(i+1);
                         	ch=true;
					   }
					   else{
						int r=1;
						while(r<n){
                         if(a[r]==a[0]){
                         	a=fun(a,r+1);
                         	ans.push_back(r+1);
                         	a=fun(a,i+1);
                         	ans.push_back(i+1);
                         	ch=true;
                         	break;
                         }
                         r++;
						}
						if(ch)
							break;
					}
				}
					
				}
			}
          
			
			if(count ==n)
				flag=false;
  
		}

		cout <<ans.size()<<" ";

		for(int i=0;i<ans.size();i++)
			cout <<ans[i]<<" ";

      cout <<endl;
	}
}
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {	
// 	int t;cin>>t;
// 	while(t--)
// 	{
// 		int n;cin>>n;
// 		string a,b;cin>>a>>b;
// 		int k=0;
// 		for(int i=0;i<n;i++)
// 			if(a[i]!=b[i]) k++;
// 		cout<<3*k<<" ";
// 		for(int i=0;i<n;i++)
// 		{
// 			if(a[i]!=b[i])
// 				cout<<i+1<<" "<<1<<" "<<i+1<<" ";
// 		}
// 		cout<<"\n";
// 	}
// }