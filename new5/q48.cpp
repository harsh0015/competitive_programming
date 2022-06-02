// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int t;cin >>t;

// 	while(t--){


// 		int n;cin>>n;

// 		string s;cin>>s;

		
// 		int a=0,b=0,c=0;

// 		for(int i=0;i<n;i++){
// 			if(s[i]=='>')a++;
// 			else if(s[i]=='<')b++;
// 			else c++;
// 		}

// 		// cout <<a<<"*"<<b<<"*"<<c<<endl;
// 		if(c!=0 && a*b*c==0){
// 			cout <<n<<endl;
// 			continue;
// 		}

// 		if(c==0 && a*b==0){
		
// 			cout <<n<<endl;
// 			continue;
// 		}


// 		int arr[n];

// 		for(int i=0;i<n;i++){
// 			if(i!=n-1){
// 				if(s[i]=='-'){
// 					arr[i]=1;
// 					arr[i+1]=1;
// 				}
// 			}
// 			else {
// 				if(s[i]=='-'){
// 					arr[n-1]=1;
// 					arr[0]=1;
// 				}
// 			}
// 		}


// 		int count=0;

// 		for(int i=0;i<n;i++)
// 			if(arr[i]==1)count++;

// 		cout <<count<<endl;
// 	}
// }
 #include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+4;
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		int n;
		scanf("%d",&n);
		cin>>s;
		int i;
		int flag1=0,flag2=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='<')
				flag1=1;
			if(s[i]=='>')
				flag2=1;
		}
		int ans=0;
		if(flag1 && flag2)
		{
			for(i=0;i<n;i++)
			{
				if(s[i]=='-' || s[(i+n-1)%n]=='-')
					ans++;
			}
			printf("%d\n",ans);
		}
		else
			printf("%d\n",n);
	}
}