// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int n;cin >>n;

// 	int arr[n];

// 	for(int i=0;i<n;i++)cin >>arr[i];


// 	vector <int >v1,v2;

// 	if(n<=2){
// 		cout <<n;
// 		return 0;
// 	}


//    v1.push_back(arr[0]);
//    v2.push_back(arr[1]);

//    for(int i=2;i<n;i++){
//    	if(arr[i]!=v1[v1.size()-1]){
//    		v1.push_back(arr[i]);
//    		continue;
//    	}
//    		v2.push_back(arr[i]);
//    }

//    int count=1;
   
//    for(int i=1;i<v2.size();i++){
//    	if(v2[i]!=v2[i-1]){count++;}
//    }


//   cout <<count+v1.size();
// }
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define pb push_back
#define endl '\n'
#define vi vector<ll>
#define vii vector<int>
#define e 0b01110100011101000111010001110100
#define fio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;cin>>t;
    while(t--)
    {
        string ans="YES";
        ll HA,HH,n,attack=0;
        cin>>HA>>HH>>n;
        ll a[n],b[n];
        rep(i,n)cin>>a[i];
        rep(i,n)cin>>b[i];
        rep(i,n)attack+=(ceil(b[i]/(double)HA))*a[i];
        if((HH+*max_element(a,a+n))<attack )ans="NO";
        cout<<ans<<endl;
    }
}