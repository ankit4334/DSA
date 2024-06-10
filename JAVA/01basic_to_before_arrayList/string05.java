//String understanding in java programing;
/*
//taking input in java
import java.util.*;
public class string05 {
    public static void main(String arge[]){
      
    // String name="ankit";
    // String fullname="ankit kumar";
    // System.out.println(name+"\n"+fullname);



    //taking input from user
    Scanner sc=new Scanner(System.in);
    String name=sc.nextLine();
    System.out.println("your name is:"+name);




    }
}
*/












/*

//concatinate the string
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    String fn="ankit";
    String ln="kumar";

    String fulln=fn+ln;
    System.out.println(fulln);

    System.out.println(fulln.length());

    //charAt
    for(int i=0;i<fulln.length();i++){
        System.out.println(fulln.charAt(i));
    }


    System.out.println();
    System.out.println();
    System.out.println();
    System.out.println();


    //compare of string 
    //s1>s2 +value
    //s1==s2
    //s1<s2
    // if(fn.compareTo(ln)==0){
    //     System.out.println("Stirng are equal");
    // }
    // else{
    //     System.out.println("String are not equal");
    // }


    //== fail various cases;
    if(fn==ln){
        System.out.println("Stirng are equal");
    }
    else{
        System.out.println("String are not equal");
    }

    }
}

*/





















/* 

//substring function in java
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    String sentance="My name is ankit";
    //substring(beg index,end index)
    String name=sentance.substring(11,sentance.length());
    String a=sentance.substring(4);
    System.out.println(a);

    System.out.println(name);


    }
}

*/







/* 

//String in java are immutable

//String builder class->add,delete operation;
//Creating StringBuilder
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    StringBuilder a=new StringBuilder("ankit");
    System.out.println(a);

    //print a particular char
    System.out.println(a.charAt(0));

    //set char at index->kisi particular jagah per char dal sakate hai
    a.setCharAt(0,'R');
    System.out.println(a);


    //insert funciton in java
    a.insert(0,'Y');
    System.out.println(a);


    //delete the element in setBuilder class
    a.delete(2,4);
    System.out.println(a);


    //append->add element at last index


    }
}
*/






/* 
//append function in java StringBuilder
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    StringBuilder a=new StringBuilder("h");
    a.append("e");
    a.append("l");
    a.append("l");
    a.append("o");
    System.out.println(a);

    //.length() work in setBuilder  
    System.out.println(a.length());

    

    }
}
*/









/* 

//reverse the String
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    StringBuilder a=new StringBuilder("hello");
    for(int i=0;i<a.length()/2;i++){
        int  s=i;
        int e=a.length()-1-i;

        char sChar=a.charAt(s);
        char eChar=a.charAt(e);

        a.setCharAt(s, eChar);
        a.setCharAt(e, sChar);

    }
   System.out.println(a);
    

    

    }
}


*/


/************************
*************************
*************************
*************************
*************************
 strirng from staring
*************************
*************************
*************************
*************************
*************************

 */








/* 
//starting string with alpha batch
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    //creating string
    char arr[]={'a','b','c','d'};
    System.out.println(arr);

    String str="abcd";
    String str2=new String("xyz");
    

    //String are immutable in case of java;
    



    //taking input in java

    Scanner sc=new Scanner(System.in);
    String  name=sc.next();
    String name2=sc.nextLine();

    System.out.print(name+"\n"+name2);

    }
} 

*/








/*

//find length in java
//length();
import java.util.*;
public class string05 {
    public static void main(String arge[]){
    // String fullName="ankit kumar";
    // System.out.println(fullName.length());




    //concatenation of string
    String firstName="ankit";
    String lastName="kumar";
    String fullname=firstName+" "+lastName;
    System.out.println(fullname);


    //ek element ko find charAt(i) se kiya jata hai
    System.out.println(fullname.charAt(4));

    }
} 

 */













 /* 

//print each using charAt(i);

import java.util.*;
public class string05 {

    public static void printletters(String  str){
        for(int i=0;i<str.length();i++){
            System.out.print(str.charAt(i)+" ");
        }
        System.out.println();

    }
    public static void main(String arge[]){
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    printletters(s);
    

    }
} 

*/










/*

//Question->given a route containing 4 direction (E,W,N,S) find the  shortest path to reach destination
import java.util.*;
public class string05 {

    public static float getShortestPaht(String  path){
        int x=0,y=0;
        for(int i=0;i<path.length();i++){
          char dir=path.charAt(i);
          if(dir=='S'){
            y--;
          }

          else if(dir=='N'){
            y++;
          }

          else if(dir=='W'){
            x--;
          }
          else{
            x++;
          }
        }
        int X2=x*x;
        int  Y2=y*y;
       return (float)Math.sqrt(X2+Y2);
    }
    public static void main(String arge[]){
    String s="WNEENESENNN";
    System.out.println(getShortestPaht(s));
    

    }
} 

 */













/* 
 //String compresion in java
  import java.util.*;
public class string05 {
    public static void main(String arge[]){
    String s1="ankit";
    String s2="ankit";
    String s3=new String("ankit");
    if(s1==s2){
        System.out.println("Strings are equal");
    }
    else{
        System.out.println("String are not equal");
    }


    if(s1==s3){
        System.out.println("Strings are equal");
    }
    else{
        System.out.println("String are not equal");
    }



    //jab ham dynamicaly memory access karte hai to == not  
    //properly work so we use->s1.equals(s3);
    if(s1.equals(s2)){
        System.out.println("Strings are equal");
    }
    else{
        System.out.println("String are not equal");
    }


    if(s1.equals(s3)){
        System.out.println("Strings are equal");
    }
    else{
        System.out.println("String are not equal");
    }



    

    }
} 

*/












/*
//subsrting in java
import java.util.*;
public class string05 {
    public static String subString(String str,int si,int ei){
        String substr="";
        for(int i=si;i<ei;i++){
         substr+=str.charAt(i);
        }

        return substr;
    }
    public static void main(String arge[]){
    
    String str="HelloWorld";
    //System.out.println(subString(str, 3, 5));

    //java me inbuilt function hota substring find karne  ke liye

    System.out.println(str.substring(3, 5));

    }
}

*/









/*

//question->for a given set of string print the largest string

//compareTo()->function compare value in laxicographi order me small value ke liye use hota hai
//compareToIgnoreCase->use small or capital  any  type of case
import java.util.*;
public class string05 {
   
    public static void main(String arge[]){

  String fruits[]={"apple","mango","banana"};
  String largest=fruits[0];
  for(int i=1;i<fruits.length;i++){
    if(largest.compareTo(fruits[i]) < 0){
        largest=fruits[i];
    }
  }

  System.out.println(largest);

    
    
    }
} 

 */



















/* 

//String Builder understanding
//StringBuilder->
//tostring()->kisi bhi object ko string me change kar deta hai
import java.util.*;
public class string05 {
   
    public static void main(String arge[]){

 StringBuilder sb=new StringBuilder("");
 for(char ch='a';ch<='z';ch++){
    sb.append(ch); //String ke last me jodta hai
 }
  System.out.println(sb);
  System.out.println(sb.length());

    
    
    }
} 


*/









/* 

//Capitalise first charachter
import java.util.*;
public class string05 {

    public static String toUpperCase(String str){
        StringBuilder sb=new StringBuilder("");
        char ch=Character.toUpperCase(str.charAt(0));//toUpperCase character ko capitalize kar deta hai
        sb.append(ch);

        for(int i=1;i<str.length();i++){
            if(str.charAt(i)==' ' && i<str.length()){
                sb.append(str.charAt(i));
                i++;
                sb.append(Character.toUpperCase(str.charAt(i)));
            }
            else{
                sb.append(str.charAt(i));
            }
        }

        return sb.toString();

    }
   
    public static void main(String arge[]){
   
    String str="hi, i am ankit";
    System.out.println(toUpperCase(str));
 
    
    
    }
} 


*/














//question->String Compression
//input->aaabbcccdd
//output->a3b2c3d2
import java.util.*;
public class string05 {

    public static String compress(String str){
        String newStr="";
          //future  me string me change karna hai Integer use karte hai
        for(int i=0;i<str.length();i++){
            Integer c=1;
            while(i<str.length()-1 && str.charAt(i)==str.charAt(i+1)){
                c++;
                i++;
            }
            newStr+=str.charAt(i);
            if(c>1){
                newStr+=c.toString();
            }

         }

        return newStr;
        

    }
   
    public static void main(String arge[]){
   
    String str="aaabbcccdd";
    System.out.println(compress(str));
 
    
    
    }
} 
