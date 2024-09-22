/*
 ->what is Recursion->Recursion is a method of solving a computational problem where the solution 
 depends on solutions to smaller instances of the same problem.

 Recursion in Java:-
 Recursion in java is a process in which a method calls itself continuously. 
 A method in java that calls itself is called recursive method.
*/


/* 
//Print number from n to 1;

import java.util.*;
public class recurion01 {
    public static int printNumber(int n){
        if(n==1){
            return 1;
        }
        System.out.print(n+" ");  

        return printNumber(n-1);


    }
    public static void main(String arges[]){
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();

       int ans=printNumber(n);
       System.out.println(ans);

    }
}


*/






/*
//Sum of First n Natural number  


import java.util.*;
public class Main
{
    public static int  printNumber(int n){
        if(n==1){
            return 1;
        }
        return n+printNumber(n-1);
    }
    
	public static void main(String[] args) {
		 Scanner sc=new Scanner(System.in);
		 int n=sc.nextInt();
		System.out.println(printNumber(n));
	}
}

*/




/*

//Question-2:-print the number from 1 to n;

import java.util.*;
public class recurion01 {
    public static void printNumber(int n){
        if(n==0){
            return ;
        }
        
       printNumber(n-1);
       System.out.print(n+" ");


    }
    public static void main(String arges[]){
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();

       printNumber(n);
       //System.out.println(ans);

    }
}
 */







/* 

//Q3:-factorial of number using recursion;
import java.util.*;
public class recurion01 {
    public static int fectoreal(int n){
        if(n==1 || n==0){
            return 1;
        }

        return n*fectoreal(n-1);
    }

    public static void main(String arges[]){
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();

       int ans=fectoreal(n);
      System.out.println(ans);

    }
}

*/






/* 

//Q4:-print Nth fibonacci number;
import java.util.*;
public class recurion01 {
    public static int fibo(int n){
        if(n==1 || n==0){
            return n;
        }
        
        return fibo(n-1)+fibo(n-2);



    }
    public static void main(String arges[]){
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();

       int ans=fibo(n);
      System.out.println(ans);

    }
}

*/








/*

//Q5 :-print Nth fibonacci number;
import java.util.*;
public class recurion01 {
    public static int fibo(int n){
        if(n==1 || n==0){
            return n;
        }
        
        return fibo(n-1)+fibo(n-2);



    }
    public static void main(String arges[]){
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();

       int ans=fibo(n);
      System.out.println(ans);

    }
}   

*/




/* 

//Cheak Array is Sorted or not......... 

import java.util.*;
public class recurion01 {

    public static boolean fun(int a[],int i){
        if(i==a.length-1){
            return true;
        }

        if(a[i]>a[i+1]){
            return false;
        }
        else{
            return fun(a,i+1);
        }
    }


    public static void main(String[] args) {
        int a[]={1,2,3,4,5};
        boolean ans=fun(a,0);

        if(ans){
            System.out.println("Array is Sorted...");
        }
        else{
            System.out.println("Arrays is Not Sorted...");
        }
    }

    
}


*/




/*

//Q6:WAF to find the first occurence of an element in an array;
import java.util.*;
public class recurion01 {
    public static int firstEccurence(int a[],int key,int i){


       if(i==a.length){
        return -1;
       }
     
       if(a[i]==key){
        return i;
       }
       

       return firstEccurence(a, key, i+1);




    }
    public static void main(String arges[]){
    
        int arr[]={8,3,6,9,5,10,2,5,3};
       
        System.out.println(firstEccurence(arr, 5,0));

    }
}   
 */



/* 

//Q7:WAF to find the last occurence of an element in an array;
import java.util.*;
public class recurion01 {
    public static int lastaccurence(int a[],int key,int i){


       if(i==a.length){
        return -1;
       }
     
       int isFound=lastaccurence(a, key, i+1);
       if(isFound==-1 && a[i]==key){
        return i;
       }


       return isFound;
    }


    public static void main(String arges[]){
    
        int arr[]={8,3,6,9,5,10,2,5,3};
       
        System.out.println(lastaccurence(arr, 5,0));

    }
}   

*/











/* 

//Q:WAF to find the x^n(x ke power n)
import java.util.*;
public class recurion01 {
    public static int power(int x,int n){

        if(n==0){
            return 1;
        }

        // int xn=power(x, n-1);
        // return x*xn;

        //or
        return x*power(x, n-1);

    }
    public static void main(String arges[]){
    
        System.out.println(power(2, 5));

    }
}   

*/








/* 
//Q:WAF to find the x^n(x ke power n)
import java.util.*;
public class recurion01 {    //O(logn)
    public static int power(int x,int n){

        if(n==0){
            return 1;
        }

        
        int half=power(x, n/2);
        if(n%2==0){
            return half*half;
        }
        else{
            return x*half*half;
        }

    }
    public static void main(String arges[]){
    
        System.out.println(power(2, 10));

    }
}   


*/













/* 
//Q:WAF to find the Timing Proble->Give a "2 x n" board and tiles of size "2 x 1",count the number of ways
//to tile the given board using the  2 x 1tiles. a tile can either be place horizontally or vertically

import java.util.*;
public class recurion01 {   
    public static int tilingProblem(int n){   //2 x n(floor size)

        //base case
        if(n==0 || n==1){
            return 1;
        }

        //vertical choice
        int fnm1=tilingProblem(n-1);


        //horizontal choice
        int fnm2=tilingProblem(n-2);

        int totWays=fnm1+fnm2;
        return totWays;

    }
    public static void main(String arges[]){
    
        // System.out.println(tilingProblem(3));   //ans-3
        //System.out.println(tilingProblem(2));    //ans-2


        System.out.println(tilingProblem(4)); //ans-5 



    }
}   

*/















/* 

//Q:Remove Duplicates in a String.('a'-'z');

import java.util.*;
public class recurion01 {    
    public static void removeduplicates(String str,int idx,StringBuilder newStr,boolean map[]){   

        //base case
        if(idx==str.length()){
            System.out.println(newStr);
            return;
        }

        char currChar=str.charAt(idx);
        if(map[currChar-'a']==true){
            //dublicate
            removeduplicates(str, idx+1, newStr, map);
        }
        else{
            map[currChar-'a']=true;
            removeduplicates(str, idx+1, newStr.append(currChar), map);
        }

    }
    public static void main(String arges[]){

        String str="appnnaacollege";
        removeduplicates(str, 0, new StringBuilder(""),new boolean[26]);
        System.out.println(str);

    }
}   

*/











/* 

//Q:Friends Pairing Problem:-Given n friends,each one an remain single or 
// can be paired up with osme other friend.each friend can be paired only  once.
// Find out the total number of ways in which friends can remain single or can 
// be paired up.

import java.util.*;
public class recurion01 {    
    public static int friendPairing(int n){  
        
        //base case
       if(n==1 || n==2){
        return n;
       }

       //choice
       //single

       int fnm1=friendPairing(n-1);

       //pair
       int fnm2=friendPairing(n-2);
       int pairWays=(n-1)*fnm2;

       //totWays
       int totWays=fnm1+pairWays;
       return totWays;

       //in sinle line
       //return friendPairing(n-1) + (n-1)*friendPairing(n-2);

    }
    public static void main(String arges[]){
        System.out.println(friendPairing(3));
    }
}   


*/















/* 

//Q:Binary Strings Problem:-Print all binary Strings of size N without consecutive ones.

import java.util.*;
public class recurion01 {    
    public static void printBinStrings(int n,int lastPlace,String str){  
        //base case
        if(n==0){
            System.out.println(str);
            return;
        }
        printBinStrings(n-1, 0, str+"0");

        if(lastPlace==0){
            printBinStrings(n-1, 1, str+"1");
        }
       
    }
    public static void main(String arges[]){
        
        printBinStrings(3,0,"");

    }
}   
*/