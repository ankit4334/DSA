/*
Graph:-newtwork of node.

Graph:-Graph is a data structure that stores a certain of data.
It represents a network that connects multiple points to each other. 


Graph Traversal:-
Traversal over the graph means visit each and every vertex and edge at least once.

1.Depth-First Search (DFS)
DFS algorithm is a recursive algorithm that is based on the backtracking concept. 
The algorithm starts from the initial node and searches in depth until it finds the 
goal node (a node that has no child). Backtracking allows us to move in the backward 
direction on the same path from which we have traversed in the forward direction.




2.Breadth-First Search (BFS)
BFS algorithm is the most common approach to traverse over the graph. 
The traversal starts from the source node and scans its neighboring nodes 
(child of the current node). In short, traverse horizontally and visit all 
the nodes of the current layer. After that, move to the next layer and perform the same.


->Storing a graph
01.Adjacency list
02.Adjacency matrix

*/

//creating adjacency list

import java.util.*;
public class graph01 {
    static class Edge{
        int src;
        int dest;
        int wt;

        Edge(int src,int dest,int wt){
            this.dest=dest;
            this.src=src;
            this.wt=wt;

        }
    }
    public static void main(String[] args) {
        /*
             (5)
         0-------1
                / \
            (1)/   \(3)
              /     \
              2 -----3
                 (1)
              |
           (2)|  
              |
              4
         
        */

        int v=5;
        ArrayList<Edge> graph[]=new ArrayList[v];  //null->empty arraylist

        for(int i=0;i<v;i++){
            graph[i]=new ArrayList<>();
        }

        //0 -vertax
        graph[0].add(new Edge(0,1,5));


        //1 -vertax
        graph[1].add(new Edge(1,0,5));
        graph[1].add(new Edge(1,2,1));
        graph[1].add(new Edge(1,3,3));
 

        //2 -vertax
        graph[2].add(new Edge(2,1,1));
        graph[2].add(new Edge(2,3,1));
        graph[2].add(new Edge(2,4,2));



        //3 -vertax
        graph[3].add(new Edge(3,1,3));
        graph[3].add(new Edge(3,2,1));



        //4 -vertax
        graph[4].add(new Edge(4,2,2));
        
        
        //2's neighbours
        for(int i=0;i<graph[2].size();i++){
            Edge e=graph[2].get(i); //src,des,wt
            System.out.println(e.dest);
        }

    }
    
}
