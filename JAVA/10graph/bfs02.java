
/*
// l-2
// Graph traversals
01.Breadth First Search(BFS)
->Go to immediate neighbors first
->level order traversal
02.Depth First Search(DFS)
->keep going to the 1st neighbor

*/

/* 
//01.implements bfs
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class bfs02 {
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

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,1,1));
        graph[0].add(new Edge(0,2,1));
        
        
        graph[1].add(new Edge(1,0,1));
        graph[1].add(new Edge(1,3,1));
        
        
        graph[2].add(new Edge(2,0,1));
        graph[2].add(new Edge(2,4,1));
        
        
        graph[3].add(new Edge(3,1,1));
        graph[3].add(new Edge(3,4,1));
        graph[3].add(new Edge(3,5,1));



        graph[4].add(new Edge(4,2,1));
        graph[4].add(new Edge(4,3,1));
        graph[4].add(new Edge(4,5,1));



        graph[5].add(new Edge(5,3,1));
        graph[5].add(new Edge(5,4,1));
        graph[5].add(new Edge(5,6,1));


        graph[6].add(new Edge(5,5,1));


    }

    public static void bfs(ArrayList<Edge> graph[]){  //Tc=O(V+E);
        Queue<Integer> q=new LinkedList<>();
        boolean vis[]=new boolean[graph.length];
        
        q.add(0);  //source=0

        while(!q.isEmpty()){
            int curr=q.remove();
            if(!vis[curr]){ //visit curr
                System.out.print(curr+" ");
                vis[curr]=true;
                for(int i=0;i<graph[curr].size();i++){
                    Edge e=graph[curr].get(i);
                    q.add(e.dest);
                }
            }
        }
    }
        
    public static void main(String[] args) {

        /*
     all edge weight are 1.
        1---3
       /    |\
      0     | 5--6
      \     | /
       2----4 
        
        */
        

        /*    
        int v=7;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
        bfs(graph);
    }
    
} 



*/







/*

//02.dfs traversal 

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class bfs02 {
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

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,1,1));
        graph[0].add(new Edge(0,2,1));
        
        
        graph[1].add(new Edge(1,0,1));
        graph[1].add(new Edge(1,3,1));
        
        
        graph[2].add(new Edge(2,0,1));
        graph[2].add(new Edge(2,4,1));
        
        
        graph[3].add(new Edge(3,1,1));
        graph[3].add(new Edge(3,4,1));
        graph[3].add(new Edge(3,5,1));



        graph[4].add(new Edge(4,2,1));
        graph[4].add(new Edge(4,3,1));
        graph[4].add(new Edge(4,5,1));



        graph[5].add(new Edge(5,3,1));
        graph[5].add(new Edge(5,4,1));
        graph[5].add(new Edge(5,6,1));


        graph[6].add(new Edge(5,5,1));


    }

    public static void bfs(ArrayList<Edge> graph[]){  //Tc=O(V+E);
        Queue<Integer> q=new LinkedList<>();
        boolean vis[]=new boolean[graph.length];
        
        q.add(0);  //source=0

        while(!q.isEmpty()){
            int curr=q.remove();
            if(!vis[curr]){ //visit curr
                System.out.print(curr+" ");
                vis[curr]=true;
                for(int i=0;i<graph[curr].size();i++){
                    Edge e=graph[curr].get(i);
                    q.add(e.dest);
                }
            }
        }
    }


    //dfs function tc= O(v+e)
    public static void dfs(ArrayList<Edge> graph[],int curr,boolean vis[]){
        //visit
        System.out.print(curr+" ");
        vis[curr]=true;

        for(int i=0;i<graph[curr].size();i++){
            Edge e=graph[curr].get(i);
            if(!vis[e.dest]){
                dfs(graph,e.dest,vis);
            }
        }


    }
    public static void main(String[] args) {

        /*
     all edge weight are 1.
        1---3
       /    |\
      0     | 5--6
      \     | /
       2----4 
        
        */
        

     /*  
        int v=7;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
        dfs(graph,0,new boolean[v]);
    }
    
}


*/











/*
Has path->for give src & dest,tell if a pth exists from src to des
*/


//question has path.


import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class bfs02 {
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

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,1,1));
        graph[0].add(new Edge(0,2,1));
        
        
        graph[1].add(new Edge(1,0,1));
        graph[1].add(new Edge(1,3,1));
        
        
        graph[2].add(new Edge(2,0,1));
        graph[2].add(new Edge(2,4,1));
        
        
        graph[3].add(new Edge(3,1,1));
        graph[3].add(new Edge(3,4,1));
        graph[3].add(new Edge(3,5,1));



        graph[4].add(new Edge(4,2,1));
        graph[4].add(new Edge(4,3,1));
        graph[4].add(new Edge(4,5,1));



        graph[5].add(new Edge(5,3,1));
        graph[5].add(new Edge(5,4,1));
        graph[5].add(new Edge(5,6,1));


        graph[6].add(new Edge(5,5,1));


    }

    public static void bfs(ArrayList<Edge> graph[]){  //Tc=O(n);
        Queue<Integer> q=new LinkedList<>();
        boolean vis[]=new boolean[graph.length];
        
        q.add(0);  //source=0

        while(!q.isEmpty()){
            int curr=q.remove();
            if(!vis[curr]){ //visit curr
                System.out.print(curr+" ");
                vis[curr]=true;
                for(int i=0;i<graph[curr].size();i++){
                    Edge e=graph[curr].get(i);
                    q.add(e.dest);
                }
            }
        }
    }





    //dfs function tc= O(v+e)
    public static void dfs(ArrayList<Edge> graph[],int curr,boolean vis[]){
        //visit
        System.out.print(curr+" ");
        vis[curr]=true;

        for(int i=0;i<graph[curr].size();i++){
            Edge e=graph[curr].get(i);
            if(!vis[e.dest]){
                dfs(graph,e.dest,vis);
            }
        }


    }



    //Has path fucntion
    //Tc=O(v+E);
    public static boolean hasPath(ArrayList<Edge>[]graph,int src,int dest,boolean vis[]){
        if(src==dest){
            return true;
        }

        vis[src]=true;

        for(int i=0;i<graph[src].size();i++){
            Edge e=graph[src].get(i);
            //e.dest=neighbour

            if(!vis[e.dest] && hasPath(graph,e.dest,dest,vis)){
                return true;
            }
        }

        return false;

    }

    public static void main(String[] args) {

        /*
     all edge weight are 1.
        1---3
       /    |\
      0     | 5--6
      \     | /
       2----4 
        
        */
        

    
        int v=7;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
        System.out.print(hasPath(graph,0,5,new boolean[v]));
    }
    
}

