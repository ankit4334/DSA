/*
 ->Heaps/Priority Queues
 with the help of heap created proority queues;


 ->if Integer value less then priority values is high.

*/



/* 
import java.util.PriorityQueue;
//for implements the priorityQueue import priorityQueue;
import java.util.*;
public class implemention {
    public static void main(String[] args) {
        
        //add()  O(logn)
        //remove O(logn)
        //peek() O(1)

        //creation of priorityQueue
        // PriorityQueue<Integer> p=new PriorityQueue<>();

        //it is use for reverse ordering
        PriorityQueue<Integer> p=new PriorityQueue<>(Comparator.reverseOrder());
        p.add(3);
        p.add(4);
        p.add(1);
        p.add(9);

        //print the element
        while(!p.isEmpty()){
            System.out.println(p.peek());
            p.remove(); 
        }
         

    }
    
}


*/










/* 

//add object type data in priorityQueue;

import java.util.PriorityQueue;
import java.util.*;
public class implemention {
    static class Student implements Comparable<Student>{
        String name;
        int rank;

        public Student(String name,int rank){
            this.name=name;
            this.rank=rank;
        }

        @Override
        public int compareTo(Student s2){
            return this.rank-s2.rank;
        }


    }
    public static void main(String[] args) {
        
        PriorityQueue<Student> p=new PriorityQueue<>();

        p.add(new Student("A", 4));
        p.add(new Student("c", 9));
        p.add(new Student("z", 1));
        p.add(new Student("q", 7));

        //print the element
        while(!p.isEmpty()){
            System.out.println(p.peek().name+"->"+p.peek().rank);
            p.remove(); 
        }
         

    }
    
}


*/







/*
  -> Heap:-A Heap is a complete binary tree data structure that 
    satisfies the heap property: for every node, the value of 
    its children is less than or equal to its own value. Heaps 
    are usually used to implement priority queues, where the 
    smallest (or largest) element is always at the root of the tree.


   -> Types of Heaps
    Ans:-There are two main types of heaps:
    1.Max Heap: The root node contains the maximum value, 
    and the values decrease as you move down the tree.

    2.Min Heap: The root node contains the minimum value, 
    and the values increase as you move down the tree.
    
  ->Binary Tree:-at most 2 children
 
 ->complete binary tree(CBT):-cbt is a bt in which all the levels are completely filled except
  possibly the last once, which one,which is filled from the left to right.


 *Heap Order Property:-
 children >=parent(minHeap)
 children <=parent(maxHeap)
 
*/














//creating heap
import java.util.*;
public class implemention{
    static class Heap{
        ArrayList<Integer> arr=new ArrayList<>();


        public void add(int data){
            arr.add(data);

            int x=arr.size()-1;   //x is child index;
            int par=(x-1)/2;    //parent index

            while(arr.get(x) < arr.get(par)){
                //swap
                int t=arr.get(x);
                arr.set(x,arr.get(par));
                arr.set(par,t);

                x=par;
                par=(x-1)/2;

            }
        } 

        public int peek(){
            return arr.get(0);
        }


        private void heapify(int i){  //O(logn)
            int left=2*i+1;
            int right=2*i+2;
            int minIdx=i;

            if(left < arr.size() && arr.get(minIdx) > arr.get(left)){
                minIdx=left;
            }

            if(right < arr.size() && arr.get(minIdx) > arr.get(right)){
                minIdx=right;
            }

            if(minIdx!=i){
                //swap
                int t=arr.get(i);
                arr.set(i,arr.get(minIdx));
                arr.set(minIdx,t);

                heapify(minIdx);
            }
        }


        public int remove(){
            int data=arr.get(0);

            //step1-swap first & last
            int temp=arr.get(0);
            arr.set(0,arr.get(arr.size()-1));
            arr.set(arr.size()-1,temp);

            //step2-delete last
            arr.remove(arr.size()-1);

            //step3-heapify
            heapify(0);
            return data;
        }

        public boolean isEmpty(){
            return arr.size()==0;
        }

    }
    public static void main(String[] args) {
       Heap h=new Heap();
       h.add(3);
       h.add(4);
       h.add(1);
       h.add(5);


       while(!h.isEmpty()){
        System.out.println(h.peek());
        h.remove();
       }
       

    }
}
