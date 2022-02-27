#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Graph representaion in adjacency list using class
This is common for every graph algorithm (BFS ,DFS....)

*/
class Graph{
public :
    vector<vector<int>> adj;
    Graph(int v){
      for (int i = 0;i<v;i++)
        {
          adj.push_back({});
        }
    }
    void addedge(int v,int w){
      adj[v].push_back(w);
      adj[w].push_back(v);
    }
  vector<int> adjlist(int v){
    return adj[v];
  }
};



/*
Driver code for producing graph (in adjacency list format)
*/
int main() {
  int n,m;
  cin>>n>>m;
  Graph x = Graph(n);
  int v,w;
  while(m){
    cin>>v>>w;
    x.addedge(v,w);
    m--;
  }
  for(int i = 0;i<n;i++){
    for(auto j:x.adjlist(i)){
      cout<<j<<" \t";
    }
    cout<<"\n";
  }
  return 1;
}