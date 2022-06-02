// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int t;cin >>t;


// 	while(t--){

// 		int n;cin >>n;
// 		int arr[n];

// 		unordered_map<int ,int >m;

// 		for(int i=0;i<n;i++){

// 			cin >>arr[i];

// 			if(m.find(arr[i])==m.end())m[arr[i]]=1;
// 			else m[arr[i]]++;
// 		}

// 		vector<int>v;

// 		for(auto i:m){
// 			v.push_back(i.second);
// 		}

// 		sort(v.begin(), v.end());

// 		unordered_map<int ,int >m1;

// 		for(int i=0;i<v.size();i++){
// 			if(m1.find(v[i])==m.end())m1[v[i]]=1;
// 			else m1[v[i]]++;
// 		}


//     vector<pair<int ,int>>v2;

//     for(auto i:m1){
//     	pair<int ,int>p;
//     	p.first=i.first;
//     	p.second=i.second;

//     	v2.push_back(p);


//     }


//     sort(v2.begin(), v2.end());


//     int val=100000;

//     for(int i=0;i<v2.size();i++){
//          int x=0;

//          for(int j=0;j<i;j++){
//          	x=x+v2[j].first*v2[j].second;
//          }

//          for(int j=i+1;j<v2.size();j++){
//          	x=x+(v2[j].first -v2[i].first)*v2[j].second;
//          }

//          if(x<val)val=x;
//     }

// cout <<val<<endl;
// 	}
// }

#include<bits/stdc++.h>
using namespace std;
const int N=2e5+300;
#define ll long long
ll a[N] , b[N] , sum[N] , c[N];
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        ll x = a[0] ,m=0;
        for (int i=0 ; i<n ; i++){
           if (a[i] != x){
                m++;
                b[m]++;
                x = a[i];
           }
           else{
                b[m]++;
           }
        }
        for (int i=0 ; i<=m ; i++){
            //cout << b[i] << " ";
        }
       // cout << "\n";
        sort(b,b+m+1);
        ll jj=0 , pp=b[0];
        for (int i=0 ; i<=m ; i++){
            if (pp != b[i]){
                pp= b[i];
                jj++;
                c[jj]++;
            }
            else{
               c[jj]++;
            }
        }
        x=-1;
        sum[0]=b[0];
        for (int i=1 ; i<=m ; i++){
           sum[i] = sum[i-1] + b[i];
        }
        for (int i=0 ; i<n ; i++){
            //cout << a[i] << " ";
        }
       // cout << "\n";
        for (int i=0 ; i<=m ; i++){
            //cout << b[i] << " ";
        }
       // cout << "\n";
        for (int i=0 ; i<=jj ; i++){
          //  cout << c[i] << " ";
        }
       // cout << "\n";
        ll ans=1e15 , k=0;
        for (int i=0 ; i<=m ; i++){
            ll p;
            if (x != b[i]){
                x=b[i];
                if (i){
                    p = sum[i-1] + (sum[m]-sum[i+c[k]-1]-((m-(i+c[k]-1))*b[i]));
 
                }
                else{
                    p= (sum[m]-sum[i+c[k]-1]-(m-(i+c[k]-1))*b[i]);
                }
                //cout << i << " " <<i+c[k]-1 << " " << m-(i+c[k]-1) <<" " <<(sum[m]-sum[i+c[k]-1]-((m-(i+c[k]-1))*b[i])) << "\n";
                ans=min(ans ,p);
                k++;
            }
        }
        cout << ans << "\n";
        for (int i=0 ; i<n ; i++){
            a[i] = b[i] = sum[i] = c[i] = 0;
        }
    }
 
}
