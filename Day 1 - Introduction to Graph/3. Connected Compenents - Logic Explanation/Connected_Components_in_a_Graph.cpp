/*

Connected Components in a Graph

Problem
Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. total number of edges in the graph. Calculate the total number of connected components in the graph. A connected component is a set of vertices in a graph that are linked to each other by paths.

Input Format:

First line of input line contains two integers n and e. Next e line will contain two integers u and v meaning that node u and node v are connected to each other in undirected fashion. 

Output Format:

For each input graph print an integer x denoting total number of connected components.

Constraints:

All the input values are well with in the integer range.

Sample Input
8 5
1 2
2 3
2 4
3 5
6 7
Sample Output
3



Time Limit: 5
Memory Limit: 256
Source Limit:
*/

// Using DFS Approach

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &visited) {
      if (!visited[node]) {
            visited[node] = 1;
            for (auto it : adj[node]) {
                dfs(it, adj, visited);
            }
      }
      return;
}

int main() {
	int n,e;
	cin>> n >> e;
	vector<int> adj[n];
	for(int i=0;i<e;i++){
		int u,v;
		cin>> u >> v;
		adj[u].push_back(v);
            adj[v].push_back(u);
	}
	vector<int> visited(n, 0);
      int count = 0;
      for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                  count++;
                  dfs(i, adj, visited);
            }
      }
      cout<<count<<endl;
      return 0;
}


/*************************************************************************/
/************************************************************************/

// Using BFS Approach

#include <bits/stdc++.h>
using namespace std;

void bfs(int node, vector<int> adj[], vector<int> &visited) {
      visited[node]=1;
      queue<int> q;
      q.push(node);
      while(!q.empty()){
            int temp=q.front();
            q.pop();

            for(auto it: adj[temp]){
                  if(!visited[it]){
                        q.push(it);
                        visited[it]=1;
                  }
            }
      }
}

int main() {
	int n,e;
	cin>> n >> e;
	vector<int> adj[n];
	for(int i=0;i<e;i++){
		int u,v;
		cin>> u >> v;
		adj[u].push_back(v);
            adj[v].push_back(u);
	}
	vector<int> visited(n, 0);
      int count = 0;
      for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                  count++;
                  bfs(i, adj, visited);
            }
      }
      cout<<count<<endl;
      return 0;
}



// Question link -- https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/