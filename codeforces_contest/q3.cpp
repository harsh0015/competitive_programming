#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[2005][2005];
int maxx[15], maxy[15], minx[15], miny[15];
int sum[15];
int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		for (int i = 0; i < 10; i++){
			maxx[i] = maxy[i] = 0;
			minx[i] = miny[i] = 2005;
			sum[i] = 0;
		}
		scanf("%d", &n);
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				scanf("%1d", &a[i][j]);
				int temp = a[i][j];
				maxx[temp] = max(i, maxx[temp]);
				maxy[temp] = max(j, maxy[temp]);
				minx[temp] = min(i, minx[temp]);
				miny[temp] = min(j, miny[temp]);
			}
		}
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				int temp = a[i][j];
				sum[temp] = max(sum[temp], abs(maxx[temp] - i) * max(j - 1, n - j));
				sum[temp] = max(sum[temp], abs(minx[temp] - i) * max(j - 1, n - j));
				sum[temp] = max(sum[temp], abs(maxy[temp] - j) * max(i - 1, n - i));
				sum[temp] = max(sum[temp], abs(miny[temp] - j) * max(i - 1, n - i));
			}
		}
		printf("%d", sum[0]);
		for (int i = 1; i < 10; i++){
			printf(" %d", sum[i]);
		}
		printf("\n");
	}
	return 0;
}