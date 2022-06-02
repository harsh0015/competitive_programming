#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int maxn = 2e5+5;
int arr[maxn];
 
int main(){
 
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i = 0;i < n;++i){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		
		long long ans = 0;
		long long j = 1;
		for (int i = 0; i < n; ++i)
		{
			while(j < n&&arr[j]-arr[i]<=2)
				j++;
			//cout << j << endl;
			long long cnt = j-i-1;
			if(cnt >= 2)
				ans += (cnt-1)*cnt/2;
		}
		printf("%lld\n",ans);
	}
	return 0;
}