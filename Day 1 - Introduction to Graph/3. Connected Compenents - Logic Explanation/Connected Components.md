
**[Connected Components](https://www.interviewbit.com/problems/connected-components/)**

**Problem Description**  

Given a graph with **A** nodes.  
The edges in graph are given in a 2D array **B**.  
There is an undirected edge between **B[i][0]** and **B[i][1]**.  
Find the **number of connected components** in the given graph.

  
  
**Problem Constraints**  

```
1 <= A <= 10^5  
1 <= |B| <= 10^5  
1 <= B[i][0], B[i][1] <= A
```

  
**Input Format**  

First argument is an integer A.  
Second argument is a 2D integer array B.
  
  
**Output Format**  
Return an integer.

  
**Example 1** 

```
Input: 
A = 4
B = [[1, 2],
     [2, 3]]


Output: 2

Explanation : The two connected components are [1, 2, 3] and [4].

```



**Example 2** 

```
Input:
A = 3
B = [1, 2]
    [2, 1]

Output: 2

Explanation: The two connected components are [1, 2] and [3].

```

  
***


### Using Breadth First Search

```cpp

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

int Solution::solve(int A, vector<vector<int>> &B) {
    int n = B.size();
    vector<int> adj[A];
    for (int i = 0; i < n; i++) {
        int u = B[i][0] - 1; // Adjusted to 0-based index
        int v = B[i][1] - 1; // Adjusted to 0-based index
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> visited(A, 0);
    int count = 0;
    for (int i = 0; i < A; i++) {
        if (!visited[i]) {
            count++;
            bfs(i, adj, visited);
        }
    }
    return count;
}
```



### Using Depth First Search

```cpp

#include <bits/stdc++.h>
using namespace std;

// Using DFS

void dfs(int node, vector<int> adj[], vector<int> &visited)
{
      if (!visited[node])
      {
            visited[node] = 1;
            for (auto it : adj[node])
            {
                  dfs(it, adj, visited);
            }
      }
      return;
}

int Solution::solve(int A, vector<vector<int>> &B)
{
      int n = B.size();
      vector<int> adj[A];
      for (int i = 0; i < n; i++)
      {
            int u = B[i][0] - 1; // Adjusted to 0-based index
            int v = B[i][1] - 1; // Adjusted to 0-based index
            adj[u].push_back(v);
            adj[v].push_back(u);
      }
      vector<int> visited(A, 0);
      int count = 0;
      for (int i = 0; i < A; i++)
      {
            if (!visited[i])
            {
                  count++;
                  dfs(i, adj, visited);
            }
      }
      return count;
}
```