// CPP code to find number of nodes
// in subtree of each node
#include <bits/stdc++.h>
using namespace std;

const int N = 8;

// variables used to store data globally
int count1[N];

// adjacency list representation of tree
vector<int> adj[N];

// function to calculate no. of nodes in a subtree
void numberOfNodes(int s, int e)
{
	vector<int>::iterator u;
	count1[s] = 1;
	for (u = adj[s].begin(); u != adj[s].end(); u++) {
		
		// condition to omit reverse path
		// path from children to parent
		if (*u == e)
			continue;
		
		// recursive call for DFS
		numberOfNodes(*u, s);
		
		// update count[] value of parent using
		// its children
		count1[s] += count1[*u];
	}
}

// function to add edges in graph
void addEdge(int a, int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}

// function to print result
void printNumberOfNodes()
{
	for (int i = 1; i < N; i++) {
		cout << "\nNodes in subtree of " << i;
		cout << ": " << count1[i];
	}
}
int minCoins(vector<int> coins, int m, int V)
{
   // base case
   if (V == 0) return 0;
 
   // Initialize result
   int res = INT_MAX;
 
   // Try every coin that has smaller value than V
   for (int i=0; i<m; i++)
   {
     if (coins[i] <= V)
     {
         int sub_res = minCoins(coins, m, V-coins[i]);
 
         // Check for INT_MAX to avoid overflow and see if
         // result can minimized
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}
// driver function
int main()
{
	// insertion of nodes in graph

	int t;cin>>t;

	while(t--){
		int n,k;cin>>n>>k;
		
	

	for(int i=2;i<=n;i++){
		int a;cin>>a;
		addEdge(a,i);
	}
	
	// call to perform dfs calculation
	// making 1 as root of tree
	numberOfNodes(1, 0);

	vector<int>v,v2;
	
	for (int i = 1; i <=n; i++) {
		v.push_back(count1[i]);
	}
	sort(v.begin(), v.end());
	v2.push_back(v[0]);

	for(int i=1;i<v.size();i++){
      if(v[i]!=v[i-1])v2.push_back(v[i]);
	}

    // cout <<v2.size()<<endl;

    int y=minCoins(v2,v2.size(),k);

    cout <<2*y-1<<endl;
	
	}
	
	return 0;
}
