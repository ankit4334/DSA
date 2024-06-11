import java.util.LinkedList;
import java.util.Scanner;
import java.util.*;
public class tree {
    public static class node{
        
        int data;
        node left;
        node right;

        node(int data){
            this.data=data;
            this.left=left;
            this.right=right;
        }
    }


    public static node buildtree(node root){
      System.out.println("Enter the data");
      Scanner sc=new Scanner(System.in);
      int data=sc.nextInt();
      root=new node(data);

      if(data==-1){
        return null;
      }
      System.out.println("Enter data for inserting in left of "+data);
      root.left=buildtree(root.left);

     System.out.println("Enter data for inserting in right of "+data);
     root.right=buildtree(root.right);

      return root;

    }




    public static void levelOrderTraversal(node root) {
       Queue<node> q=new LinkedList<>();
        q.add(root);
        q.add(null);
    
        while(!q.isEmpty()) {
            node temp = q.poll();
            q.remove();
    
            if(temp == null) { 
                //purana level complete traverse ho chuka hai
                System.out.println();
                if(!q.isEmpty()) { 
                    //queue still has some child ndoes
                    q.add(null);
                }  
            }
            else{
                //cout << temp -> data << " ";
                System.out.println(temp.data+" ");
                if(temp.left!=null) {
                    q.add(temp.left);
                }
    
                if(temp.right!=null) {
                    q.add(temp.right);
                }
            }
        }
    
    }




    public static void main(String[] args) {
        node root=null;

        root=buildtree(root);
        levelOrderTraversal(root);
        
    }
}
