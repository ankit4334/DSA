#include<bits/stdc++.h>
void prepareAdjList( unorder_map<int,list<int>>&adjList,vector<vector<int>> &adj){
    
    for(int i=0;i<adj.size();i++){
    int u=adj[i][0];
    int v=adj[i][1];

    adjList[u].push_back(v);
    adjList[v].push_back(u);
    }
}


void bfs(unorder_map<int,list<int>> adjList,unorder_map<int,bool> visited,vector<int> ans,int node){
    queue<int> q;
    q.push(node);
    visited[node]==1;

    while(!q.empty()){
        int frontNode=q.front();
        q.pop();

        //store forntNode into ans

        ans.push_back(frontNode);

        //traverse all neighbours of front Node

        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }

    }

}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){

    unorder_map<int,list<int>> adjList;
    vector<int> ans;
    unorder_map<int,bool> visited;

    prepareAdjList(adjList,adj);

    //traverse all components of a graph

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(adjList,visited,ans,1);
        }
    }

}