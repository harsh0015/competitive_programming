// #include<bits/stdc++.h>
// using namespace std;

// typedef long long int ll;
// typedef  long double lld;

// int main(){

// 	int t;cin >>t;

// 	while(t--){

// 		int n;cin >>n;
// 		vector<lld> arr1;
// 		vector<lld> arr2;

// 		for(int i=0;i<2*n;i++){
//              lld a,b;cin >>a>>b;

//              if(a==0){
//                arr2.push_back(abs(b));
//              }
//              else arr1.push_back(abs(a));

// 		}

// 		sort(arr1.begin(), arr1.end());
// 		sort(arr2.begin(), arr2.end());

// 		long double ans=0;

// 		for(int i=0;i<n;i++){

// 			ans=ans+sqrt(arr1[i]*arr1[i]+arr2[i]*arr2[i]);
// 		}



//    cout <<setprecision(20)<<lld(ans)<<endl;

// 	}
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        int n;
        int x,y;
        scanf("%d",&n);
        vector<int> a;
        vector<int> b;
        for(int i=0;i<2*n;i++){
            scanf("%d%d",&x,&y);
            if(x==0){
                b.push_back(abs(y));
            }
            else{
                a.push_back(abs(x));
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        double ans=0;
        for(int i=0;i<n;i++){
            ans+=sqrt(1.0*a[i]*a[i] + 1.0*b[i]*b[i]);
        }
        printf("%.15lf \n",ans);
    }
}