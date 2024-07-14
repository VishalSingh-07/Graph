// Using Adjacency Matrix

// For undirected Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency matrix for undirected graph
      // time complexity: O(m)
      
      // For 1-based indexing

      int adj[n+1][n+1];
      for(int i=0;i<m;i++){
            int u,v;
            cin>> u >> v;
            adj[u][v]=1;
            adj[v][u]=1; // this statement will be removed in case of directed graph
      }
      return 0;
}

// Using this method to implement a graph is costly due to space complexity O(n*n). So we will use Adjacency list to implement the graph


/*----------------------------------------------------------------------------------*/

// For Directed Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency matrix for directed graph
      // time complexity: O(m)
      
      // For 1-based indexing

      int adj[n+1][n+1];
      for(int i=0;i<m;i++){
            int u,v;
            cin>> u >> v;
            adj[u][v]=1;
      }
      return 0;
}






/**********************************************************************/
/*IMPLEMENTATION OF WEIGHTED GRAPH USING ADJACENCY MATRIX*/
/*********************************************************************/


// Using Adjacency Matrix

// For undirected Weighted Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency matrix for undirected weighted graph
      // time complexity: O(m)
      
      // For 1-based indexing

      int adj[n+1][n+1];
      for(int i=0;i<m;i++){
            int u,v,x;
            cin>> u >> v >> x;
            adj[u][v]=x;
            adj[v][u]=x; // this statement will be removed in case of directed graph
      }
      return 0;
}

// Using this method to implement a graph is costly due to space complexity O(n*n). So we will use Adjacency list to implement the graph


/*----------------------------------------------------------------------------------*/

// For Directed Weighted Graph

#include <bits/stdc++.h>
using namespace std;
int main(){

      // where n: number of nodes and m: number of edges
      int n,m;
      cin>> n >> m;

      // adjacency matrix for directed weighted graph
      // time complexity: O(m)
      
      // For 1-based indexing

      int adj[n+1][n+1];
      for(int i=0;i<m;i++){
            int u,v,x;
            cin>> u >> v >> x;
            adj[u][v]=x;
      }
      return 0;
}