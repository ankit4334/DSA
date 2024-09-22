#include<iostream>
using namespace std;
#include<bits/stdc++.h>

const int N=1e3+10;
int graph1[N][N];
vector<pair<int,int>> graph2[N];

int main(){

 int n,m;
 cin>>n>>m;
//int graph[n+1][m+1];
for(int i=0;i<m;i++){
    int v1,v2,wt;
    cin>>v1>>v2;
    graph1[v1][v2]=wt;
    graph1[v2][v1]=wt;

    graph2[v1].push_back({v2,wt});
    graph2[v2].push_back({v1,wt});
}


    return 0;
}
/*
Adjacency matrix
O(N^2)- space complexity
N!=10^/  N<=10^3


Adjeacency list
O(n+m)
*/