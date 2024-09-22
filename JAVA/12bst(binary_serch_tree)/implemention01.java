/*
What is a tree?
Ans:-A tree is a kind of data structure that is used to represent the data in hierarchical form. 

Binary Search Tree:-
A binary search tree follows some order to arrange the elements.
In a Binary search tree, the value of left node must be smaller 
than the parent node, and the value of right node must be greater 
than the parent node. This rule is applied recursively to the left 
and right subtrees of the root.





//Binary Seach tree
1.left subtree nodes < root

2.right subtree nodes > root

3.left and right subrees are also BST with no duplicates

4.INORDER Traversal of BST gives a sorted sequence.

5.reduce time complexity in Binary search tree O(h) where O(n) in binary tree.

6.Time complexity of BST(
1.BEST CASE-o(log n):-Height of tree. 
2.AVERAGE CASE-O(log n)
3.WORST CASE-O(n)
)

*/

//implements  BST;
import java.util.*;
import java.util.ArrayList;

public class implemention01 {
    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }

    }


    public static Node insert(Node root,int val){

        if(root==null){
           root=new Node(val);
           return root;
        }

        if(root.data>val){
            root.left=insert(root.left, val);
        }
        else{
        root.right=insert(root.right, val);
        }
        return root;

    }

    public static void inorder(Node root){
        if(root==null){
            return    ;
        }

        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }




    //Question01->serch of BST

    public static boolean serch(Node root,int key){
        if(root==null){
            return false;
        }

        if(root.data==key){
            return true;
        }
        
        if(root.data>key){
            return serch(root.left,key);
        }
        else{
            return serch(root.right,key);
        }
    }


    //Question02->delete a node in BST;
    /*
    ->there there three cases
    1.No chiled (leaf node)
    2.One child
    3.Two children->
    ->replace value with inorder successor
    ->delete the node for inorder successor
    
    */
    public static Node delete(Node root,int val){
        if(root.data<val){
            root.right=delete(root.right,val);
        }
        else if(root.data>val){
            root.left=delete(root.left,val);
        }
        else{
            //case 1-leaf node  delete leaf 
            if(root.left==null && root.right==null){
                return null;
            }

            //case 2.delete one chile node
            if(root.left==null){
                return root.right;
            }
            else if(root.right==null){
                return root.left;
            }


            //case 3-delete both children node
            Node IS=ifindInorderSuccessor(root.right);
            root.data=IS.data;
            root.right=delete(root.right,val);
        }

        return root;

    }

    public static Node ifindInorderSuccessor(Node root){
        while(root.left!=null){
            root=root.left;
        }
        return root;
    }





    //Question03->print the in range 
    public static void printInRange(Node root,int k1,int k2){

        if(root==null){
            return;
        }

        if(root.data>=k1 && root.data<=k2){
            printInRange(root.left,k1,k2);
            System.out.print(root.data+" ");
            printInRange(root.right,k1,k2);

        }
        else if(root.data < k1){
            printInRange(root.left,k1,k2);
        }
        else{
             printInRange(root.right,k1,k2);
        }
    }



    //Question04->print root to leaf all the path
    public static void printPath(ArrayList<Integer> path){
        for(int i=0;i<path.size();i++){
            System.out.print(path.get(i)+"->");
        }
        System.out.println("Null");
    }
    public static void printRoot2leaf(Node root,ArrayList<Integer> path){

        if(root==null){
            return;
        }
 
        path.add(root.data);

        if(root.left==null && root.right==null){
            printPath(path);
        }

        printRoot2leaf(root.left,path);
        printRoot2leaf(root.right,path);
        path.remove(path.size()-1);

    }



    //Question 05:-cheak tree is ValidBST
    public static boolean isValidBST(Node root,Node min,Node max){
        if(root==null){
            return true;
        }

        if(min!=null && root.data<=min.data){
            return false;
        }
        else if(max!=null && root.data>=max.data){
            return false;
        }

        return isValidBST(root.left, min, root) && 
        isValidBST(root.right, root, max);
    }







    public static void main(String[] args) {
        int values[]={8,5,3,1,4,6,10,11,14};

        Node root=null;


        for(int i=0;i<values.length;i++){
         root=insert(root, values[i]);
        }
        
    //createing of BST
    inorder(root);
    System.out.println(); 



    //serch funtion searching an element of BST;
    // if(serch(root, 1)){
    //     System.out.println("key is found");
    // }
    // else{
    //     System.out.println("key is not found");
    // }



    //delete a node in BST;
    // root=delete(root, 10);
    // inorder(root);



    //print in range
    //printInRange(root, 5, 12);




    //print to leaf all path
    //printRoot2leaf(root,new ArrayList<>());






    //cheack is valid BST

    if(isValidBST(root, null, null)){
        System.out.println("valid");
    }
    else{
        System.out.println("not valid");
    }
    
    }
}
