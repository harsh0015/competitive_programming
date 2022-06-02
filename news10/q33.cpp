#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   void dfs(int node, vector<int< graph[], vector<bool>& visited){
      if(visited[node]) return;
         visited[node] = true;
      for(int i = 0; i < graph[node].size(); i++){
         dfs(graph[node][i], graph, visited);
      }
   }
   int countComponents(int n, vector<vector<int<>& edges) {
      vector <bool> visited(n);
      if(!n) return 0;
         vector <int< graph[n];
      for(int i = 0; i < edges.size(); i++){
         int u = edges[i][0];
         int v = edges[i][1];
         graph[u].push_back(v);
         graph[v].push_back(u);
      }
      int ret = 0;
      for(int i = 0; i < n; i++){
         if(!visited[i]){
            dfs(i, graph, visited);
            ret++;
         }
      }
      return ret;
   }
};
main(){
   Solution ob;
   vector<vector<int<> v = {{0,1},{1,2},{3,4}};
   cout << (ob.countComponents(5, v));
}