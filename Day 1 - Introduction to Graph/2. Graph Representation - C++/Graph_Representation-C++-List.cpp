// Using Adjacency List

// For undirected Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency list for undirected graph
      // time complexity: O(m)
      
      // For 1-based indexing

      vector<int> adj[n+1];
      for(int i=0;i<m;i++){
            int u,v;
            cin>> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // this statement will be removed in case of directed graph
      }
      return 0;
}

// Space Complexity O(2E) where E: Number of Edges


/*----------------------------------------------------------------------------------*/

// For Directed Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency list for directed graph
      // time complexity: O(m)
      
      // For 1-based indexing

      vector<int> adj[n+1];
      for(int i=0;i<m;i++){
            int u,v;
            // u ---> v
            cin>> u >> v;
            adj[u].push_back(v);
      }
      return 0;
}


// Space Complexity O(E) where E: Number of Edges



/*****************************************************************************************/
/****IMPLEMENTATION OF WEIGHTED GRAPH USING ADJACENCY LIST*/
/****************************************************************************************/


// Using Adjacency List

// For undirected weighted Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency list for undirected weighted graph
      // time complexity: O(m)
      
      // For 1-based indexing

      vector<pair<int,int>> adj[n+1];
      for(int i=0;i<m;i++){
            int u,v,x;
            cin>> u >> v >> x;
            adj[u].push_back({v,x});
            adj[v].push_back({u,x}); // this statement will be removed in case of directed graph
      }
      return 0;
}

// Space Complexity O(2E) where E: Number of Edges


/*----------------------------------------------------------------------------------*/

// For Directed weighted  Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency list for directed weighted graph
      // time complexity: O(m)
      
      // For 1-based indexing

      vector<pair<int,int>> adj[n+1];
      for(int i=0;i<m;i++){
            int u,v,x;
            // u ---> v
            cin>> u >> v >> x;
            adj[u].push_back({v,x});
      }
      return 0;
}


// Space Complexity O(E) where E: Number of Edges
