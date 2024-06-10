/*

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
