//Connected Components->means two graph is not connected then using this method 
//cheak bfs and dfs

//01 connected compnents
/*
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class  part03{
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



    public static void bfs(ArrayList<Edge> graph[]){
        boolean vis[]=new boolean[graph.length];
        for(int i=0;i<graph.length;i++){
            if(!vis[i]){
                bfsUtil(graph,vis);
            }
        }
    }



    public static void bfsUtil(ArrayList<Edge> graph[],boolean vis[]){  //Tc=O(n);
        Queue<Integer> q=new LinkedList<>();
        
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



    public static void dfs(ArrayList<Edge> graph[]){
        boolean vis[]=new boolean[graph.length];
        for(int i=0;i<graph.length;i++){
           if(!vis[i]){
            dfsUtil(graph, i, vis);
           }
        }

    }


    public static void dfsUtil(ArrayList<Edge> graph[],int curr,boolean vis[]){
        //visit
        System.out.print(curr+" ");
        vis[curr]=true;

        for(int i=0;i<graph[curr].size();i++){
            Edge e=graph[curr].get(i);
            if(!vis[e.dest]){
                dfsUtil(graph,e.dest,vis);
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
 * Cycle in Graphs:-
 * 01.undirected-
 ->dfs,bfs,dsu(disjoint set union)
 ->to dedect cyclye in undirected graph

 02.directed-
 ->dfs,bfs,and topological sort(hahn's algorithm)
 ->above method is use to dedect cyclye in directed graph
*/




//undirected graph
/*
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class  part03{
    static class Edge{
        int src;
        int dest;
        

        Edge(int src,int dest){
            this.dest=dest;
            this.src=src;
        }
    }

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,1));
        //[0].add(new Edge(0,2));
        graph[0].add(new Edge(0,3));
        
        
        graph[1].add(new Edge(1,0));
        graph[1].add(new Edge(1,2));
        
        
        //graph[2].add(new Edge(2,0));
        graph[2].add(new Edge(2,1));
        
        
        graph[3].add(new Edge(3,0));
        graph[3].add(new Edge(3,4));
        

        graph[4].add(new Edge(4,3));
        
    }


    //DetectCycle code using dfs 
    //TC=O(v+e)
    public static boolean detectCycle(ArrayList<Edge> graph[]){
        boolean vis[]=new boolean[graph.length];
        for(int i=0;i<graph.length;i++){
            if(!vis[i]){
                if(detectCycleUtil(graph,vis,i,-1)){
                    return true;
                    //cycle exists in one of the parts
                }
            }  
        }
        return false;

    }

    //TC=O(V+E)
    public static boolean detectCycleUtil(ArrayList<Edge> graph[],boolean vis[],int curr,int par){
        vis[curr]=true;

        for(int i=0;i<graph[curr].size();i++){
            Edge e=graph[curr].get(i);

            //case 3

            if(!vis[e.dest]){
                if(detectCycleUtil(graph, vis, e.dest, curr)){
                    return true;
                }
                
            }

            //case 1;
            else if(vis[e.dest] && e.dest!=par){
                return true;
            }
            //case 2-< do nothing -> continue

        }

        return false;
    }
    public static void main(String[] args) {

        /*
     all edge weight are 1.
        1---3
       /|   | 
      0 |   |
      \ |   |
        2   4 
        
        */
        

       /* 
        int v=5;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
       System.out.println(detectCycle(graph));
    }
    
}


*/



 





/*
Bipartite Graph->A Bipartite graph is a graph whose vertices can be divided into 
two indepnedent sets, U and V such that every edge (u,v) either connects a vertex from U to v
or a vertex from U to U. In other words, for every edge (u,v),either u belongs to u and v to V,or u
belongs to va and v t U.We can also say that there is no edge that connects vertices fo same set.


->Condtion of Bipartite:-
01.Acyclic           true
02.Even Cycle        true
03.Odd Cycle         false

*/



/*

//Graph is bipartite or not

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class  part03{
    static class Edge{
        int src;
        int dest;
        

        Edge(int src,int dest){
            this.dest=dest;
            this.src=src;
        }
    }

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,1));
        //[0].add(new Edge(0,2));
        graph[0].add(new Edge(0,2));
        
        
        graph[1].add(new Edge(1,0));
        graph[1].add(new Edge(1,3));
        
        
        graph[2].add(new Edge(2,0));
        graph[2].add(new Edge(2,4));
        
        
        graph[3].add(new Edge(3,1));
        graph[3].add(new Edge(3,4));
        

        graph[4].add(new Edge(4,2));
        graph[4].add(new Edge(4,3));
        
    }


    //check graph isBipartile or not TC=O(V+E)
    public static boolean isBipartite(ArrayList<Edge> graph[]){
        int col[]=new int[graph.length];
        for(int i=0;i<col.length;i++){
            col[i]=-1; //no color
        }
        Queue<Integer> q=new LinkedList<>();

        for(int i=0;i<graph.length;i++){
            if(col[i]==-1){  //BFS
                q.add(i);
                col[i]=0;  //yellow

                while(!q.isEmpty()){
                   int curr=q.remove();
                   for(int j=0;j<graph[curr].size();j++){
                    Edge e=graph[curr].get(j);  //e.dest

                    if(col[e.dest]==-1){
                        int nextCol=col[curr]==0 ? 1 : 0;
                        col[e.dest]=nextCol;
                        q.add(e.dest);
                    }
                    else if(col[e.dest]==col[curr]){
                        return false;  //NOT BIPARTITE
                    }
                   } 
                }
            }
        }

        return true;
        
    }


    
    public static void main(String[] args) {

        /*
        -> if graph doesn't have cycle then bidefaoult is bipartite
           0-------2
          /       /
         /      /
         1     4
          \   /
           \ /
            3  

         ans=FALSE;
        */
        

        /*
        int v=5;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
        System.out.println(isBipartite(graph));
       
    }
    
}

*/












//Cycle Detection
//Directed Graph(DFS)
/*
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class  part03{
    static class Edge{
        int src;
        int dest;
        

        Edge(int src,int dest){
            this.dest=dest;
            this.src=src;
        }
    }

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,2));
        

        graph[1].add(new Edge(1,0));
        
        graph[2].add(new Edge(2,3));
         
        graph[3].add(new Edge(3,0));
       
    }


    //check graph isBipartile or not TC=O(V+E)
    public static boolean isBipartite(ArrayList<Edge> graph[]){
        int col[]=new int[graph.length];
        for(int i=0;i<col.length;i++){
            col[i]=-1; //no color
        }
        Queue<Integer> q=new LinkedList<>();

        for(int i=0;i<graph.length;i++){
            if(col[i]==-1){  //BFS
                q.add(i);
                col[i]=0;  //yellow

                while(!q.isEmpty()){
                   int curr=q.remove();
                   for(int j=0;j<graph[curr].size();j++){
                    Edge e=graph[curr].get(j);  //e.dest

                    if(col[e.dest]==-1){
                        int nextCol=col[curr]==0 ? 1 : 0;
                        col[e.dest]=nextCol;
                        q.add(e.dest);
                    }
                    else if(col[e.dest]==col[curr]){
                        return false;  //NOT BIPARTITE

                    }
                   } 
                }
            }
        }

        return true;
        
    }

    public static boolean isCycle(ArrayList<Edge> graph[]){
        boolean vis[]=new boolean[graph.length];
        boolean stack[]=new boolean[graph.length];

        for(int i=0;i<graph.length;i++){
            if(!vis[i]){
                if(isCycleUtil(graph,i,vis,stack)){
                    return true;
                }
            }
        }
        return false;
    }


    public static boolean isCycleUtil(ArrayList<Edge> graph[],int curr,boolean vis[],boolean stack[]){
        vis[curr]=true;
        stack[curr]=true;

        for(int i=0;i<graph[curr].size();i++){
            Edge e=graph[curr].get(i);
            if(stack[e.dest]){ //cycle
                return true;
            }
            if(!vis[e.dest] && isCycleUtil(graph,e.dest,vis,stack)){
                return true;
            }
        }
        stack[curr]=false;
        return false;
    }
    
    public static void main(String[] args) {
        /*
        1------0\
               | \
               |  3
               | / 
                2
          ans=true cycle is presant;
        */
       /* 
        int v=4;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
        System.out.println(isCycle(graph));
       
    }
    
}

 */














//Topological Sortig:-
/*
Topological Sortig:-Directed Acyclic Graph(DAG) is a directed graph with no cycles.

Topological sorting is used only for DAGs(not for non-DAGs)

it is a linear order of vertices such that every directed edge u ->v,
the vetex u comes before v in the order.

->topological sorting:-
*dependency

Action 1-boil water
Action 2-add masala
Action 3-add maggie
Action 4-serve maggie

        1--->\2
        \       \>
         \>3----->4
        
 sort:-1 2 3 4 or 1 3 2 4
}
        

*/

//topological sort Using Dfs

/* 
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class  part03{
    static class Edge{
        int src;
        int dest;
        

        Edge(int src,int dest){
            this.dest=dest;
            this.src=src;
        }
    }

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[2].add(new Edge(2,3));
        

        graph[3].add(new Edge(3,1));
        
        graph[4].add(new Edge(4,0));
        graph[4].add(new Edge(4,1));
         
        graph[5].add(new Edge(5,0));
        graph[5].add(new Edge(5,2));
       
    }

    //O(V+E)=TC
    public static void topSort(ArrayList<Edge> graph []){
        boolean vis[]=new boolean[graph.length];
        Stack<Integer> s=new Stack<>();

        for(int i=0;i<graph.length;i++){
            if(!vis[i]){
                topSortUtil(graph,i,vis,s);   //modified dfs
            }
        }

        while(!s.isEmpty()){
            System.out.print(s.pop()+" ");
        }
    }

    public static void topSortUtil(ArrayList<Edge> graph [],int curr,boolean vis[],Stack<Integer> s){
        vis[curr]=true;
        for(int i=0;i<graph[curr].size();i++){
            Edge e=graph[curr].get(i);
            if(!vis[e.dest]){
                topSortUtil(graph,e.dest,vis,s);
            }
        }
        s.push(curr);

    }

    public static void main(String[] args) {
        
        int v=6;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
       topSort(graph);
       
    }
    
}




*/














/*
 ->Topological Sort using BFS(kan's algorithms)
 ->Fact:-A DAG has at least one veted with in-degree 0 and one vertex with 
 out-degree 0.
*/


/* 
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class  part03{
    static class Edge{
        int src;
        int dest;
        

        Edge(int src,int dest){
            this.dest=dest;
            this.src=src;
        }
    }

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[2].add(new Edge(2,3));
        

        graph[3].add(new Edge(3,1));
        
        graph[4].add(new Edge(4,0));
        graph[4].add(new Edge(4,1));
         
        graph[5].add(new Edge(5,0));
        graph[5].add(new Edge(5,2));
       
    }

    //O(V+E)=TC
    public static void topSort(ArrayList<Edge> graph []){
        int indeg[]=new int[graph.length];
        calcIngeg(graph, indeg);
        Queue<Integer> q=new LinkedList<>();

        for(int i=0;i<indeg.length;i++){
            if(indeg[i]==0){
                q.add(i);
            }
        }

        //bfs
        while(!q.isEmpty()){
            int curr=q.remove();
            System.out.print(curr+" ");   //topological sort print

            for(int i=0;i<graph[curr].size();i++){
                Edge e=graph[curr].get(i);
                indeg[e.dest]--;

                if(indeg[e.dest]==0){
                    q.add(e.dest);
                }
            }
        }
        System.out.println();
    }

    public static void calcIngeg(ArrayList<Edge> graph [],int indeg[]){
        for(int i=0;i<graph.length;i++){
            int v=i;
            for(int j=0;j<graph[v].size();j++){
                Edge e=graph[v].get(j);
                indeg[e.dest]++;
            }
        }

    }

    public static void main(String[] args) {
        
        int v=6;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
       topSort(graph);
       
    }
    
}


*/














//All paths from source to destination(target) Directed graph
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class  part03{
    static class Edge{
        int src;
        int dest;
        

        Edge(int src,int dest){
            this.dest=dest;
            this.src=src;
        }
    }

    static void creatGraph(ArrayList<Edge> graph[]){
        for(int i=0;i<graph.length;i++){
            graph[i]=new ArrayList<>();
        }

        graph[0].add(new Edge(0,3));

        graph[2].add(new Edge(2,3));
        

        graph[3].add(new Edge(3,1));
        
        graph[4].add(new Edge(4,0));
        graph[4].add(new Edge(4,1));
         
        graph[5].add(new Edge(5,0));
        graph[5].add(new Edge(5,2));
       
    }

  //Exponential time complexity
  public static void printAllPath(ArrayList<Edge> graph [],int src,int dest,String path){
        if(src==dest){
            System.out.println(path+dest);
            return;
        }

        for(int i=0;i<graph[src].size();i++){
            Edge e=graph[src].get(i);
            printAllPath(graph, e.dest, dest, path+src);
        }

    }

    public static void main(String[] args) {
        
        int v=6;
        ArrayList<Edge> graph[]=new ArrayList[v];
        creatGraph(graph);
        int src=5,dest=1;
       printAllPath(graph,src,dest,"");
       
    }
    
}
