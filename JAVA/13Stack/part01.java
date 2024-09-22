/*

  what is Data structure and algorithm:
  Ans:-Data structures are ways of organizing and storing data in a computer. 
  Common data structures include arrays, linked lists, stacks, queues, trees, and graphs. 

  ->Algorithms are sets of steps for solving problems. Basic algorithms include sorting, searching, and recursion.
 
  ->Types of Data Structures.
  There are two types of data structures:
  1.Primitive data structure
  The primitive data structures are primitive data types. The int, char, float, double, 
  and pointer are the primitive data structures that can hold a single value.


  2.Non-primitive data structure
  The non-primitive data structure is divided into two types:

  1.Linear data structure
  The arrangement of data in a sequential manner is known as a linear data structure. 


  2.Non-linear data structure
  What Is a Non-Linear Data Structure? It is a form of data structure where the data elements don't stay arranged linearly or sequentially.
  example-bt,bst,heap etc.


  -------------------------------------------------------------------------------
  ->Data structures can also be classified as:
  1.Static data structure: It is a type of data structure where the size is allocated at the compile time. Therefore, the maximum size is fixed.
  2.Dynamic data structure: It is a type of data structure where the size is allocated at the run time. Therefore, the maximum size is flexible.


*/

/* 
 ->Collections in Java:-
   The Collection in Java is a framework that provides 
   an architecture to store and manipulate the group of objects.

  -Java Collection means a single unit of objects. Java Collection 
  framework provides many interfaces (Set, List, Queue, Deque) and 
  classes (ArrayList, Vector, LinkedList, PriorityQueue, HashSet, LinkedHashSet, TreeSet).
  

  ->What is a framework in Java.
  ans:-t provides readymade architecture.
    *It represents a set of classes and interfaces.
    *It is optional.
  

 Stack in java:-
 The stack is a linear data structure that is used to store the collection of objects.
 It is based on Last-In-First-Out (LIFO).



*/

//Opertions of Stack
/*
 stack is also called (LIFO=last in first out)
 push O(1)
 pop O(1)
 peek O(1) 
*/

/*
//Implemention  of stack using class(with array not linked list);
#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
     int *arr;
     int top;
     int size;
    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }


    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }

    }

    bool isEmpty(){
         if(top==-1){
            return true;
         }
         else{
            return false;
         }

    }

};

int main(){
    Stack s(5);

    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    if(s.isEmpty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    
    return 0;
}
*/

/* 
//Implemention of stack using ArrayList

import java.util.ArrayList;
public class part01 {
    static class Stack{
    static ArrayList<Integer> list=new ArrayList<>();
    
    //isEmpty
    public static boolean isEmpty(){
        return list.size()==0;
    }

    //push
    public static void push(int data){
        list.add(data);
    }

    //pop
    public static int pop(){
        if(isEmpty()){
            return -1;   
        }
        int top=list.get(list.size()-1);
        list.remove(list.size()-1);
        return top;
    }

    //peek
    public static int peek(){
        if(isEmpty()){
            return -1;   
        }
        return list.get(list.size()-1);
    }
        
    }
    public static void main(String[] args) {
        Stack s=new Stack();
        s.push(1);
        s.push(2);
        s.push(3);


        while (!s.isEmpty()){
            System.out.print(s.peek()+" ");
            s.pop();
        }
    }
}
*/

/*

//Stack Implemention using LinkedList
import java.util.ArrayList;
public class part01 {

    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null; 
        }
    }

    static class Stack{
        static Node head=null;
         
        //isEmpty
        public static boolean isEmpty(){
           return head==null;
        }

        //push
        public static void push(int data){
            Node newNode=new Node(data);
            if(isEmpty()){
                head=newNode;
                return;
            }
            else{
                newNode.next=head;
                head=newNode;
            }
        }


        //pop funtion
        public static int pop(){
            if(isEmpty()){
                return -1;
            }

            int top=head.data;
            head=head.next;
            return top;
        }
        

        //peek function
        public static int peek(){
            if(isEmpty()){
                return -1;
            }
            return head.data;
        }
    }

    public static void main(String[] args) {
        Stack s=new Stack();
        s.push(1);
        s.push(2);
        s.push(3);


        while (!s.isEmpty()){
            System.out.print(s.peek()+" ");
            s.pop();
        }
        
    }
}
*/

/* 
//Stack Implemention java framwork
import java.util.*;
public class part01 {
    public static void main(String[] args) {
        Stack<Integer> s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);


        while (!s.isEmpty()){
            System.out.print(s.peek()+" ");
            s.pop();
        }
    }
}

*/

/* 

//Question 01:-Push at the Bottom of the Stack
import java.util.*;
public class part01{

    public static void pushAtBottom(Stack<Integer> s,int data){

        if(s.isEmpty()){
            s.push(data);
            return;
        }

        int top=s.pop();
        pushAtBottom(s,data);
        s.push(top);
    }

    public static void main(String[] args) {
        Stack<Integer> s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);

        pushAtBottom(s,4);
        while (!s.isEmpty()){
            System.out.println(s.pop()+" ");
        }
    }
}

*/

/*
//Question 02:-Reverse a String using a Stack
import java.util.*;
public class part01 {

    public static String reverseString(String str){

        Stack<Character> s=new Stack<>();
        int idx=0;
        while(idx < str.length()){
           s.push(str.charAt(idx));
            idx++;
        }

        StringBuilder result=new StringBuilder("");
        while(!s.isEmpty()){
            char curr=s.pop();
            result.append(curr);
        }

        return result.toString();
    }
    public static void main(String[] args) {
       String str="abc";
       String result=reverseString(str);
       System.out.println(result);
    }
}

*/

/* 
//Question 03:-Reverse a Stack
import java.util.*;
public class part01 {

    public static void pushAtBottom(Stack<Integer> s,int data){

        if(s.isEmpty()){
            s.push(data);
            return;
        }

        int top=s.pop();
        pushAtBottom(s,data);
        s.push(top);
    }

    public static void reverseStack(Stack<Integer> s){
        if(s.isEmpty()){
            return;
        }

        int top=s.pop();
        reverseStack(s);
        pushAtBottom(s, top);

    }

    public static void printStack(Stack<Integer> s){
        while (!s.isEmpty()) {
            System.out.println(s.pop());
        }
    }
    

    public static void main(String[] args) {
        Stack<Integer> s=new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
       
        reverseStack(s);
        printStack(s);
    }
}

*/

/* 

//Question 04:-Stock Span Problem
import java.util.*;
public class part01 {

    public static void stockSpan(int stocks[],int span[]){
        Stack<Integer> s=new Stack<>();
        span[0]=1;
        s.push(0);

        for(int i=1;i<stocks.length;i++){
            int currPrice=stocks[i];
            while(!s.isEmpty() && currPrice > stocks[s.peek()]){
                s.pop();
            }
            if(s.isEmpty()){
                span[i]=i+1;
            }
            else{
                int prevHigh=s.peek();
                span[i]=i-prevHigh;
            }
            s.push(i);
        }
    }

    public static void printStack(Stack<Integer> s){
        while (!s.isEmpty()) {
            System.out.println(s.pop());
        }
    }
    public static void main(String[] args) {
        int stocks[]={100,80,60,70,60,85,100};
        int span[]=new int[stocks.length];
        stockSpan(stocks,span);

        for(int i=0;i<span.length;i++){
            System.out.println(span[i]+" ");
        }
    }
}

*/

/* 
IMPORTENT
//Question 05:-Next Greater Elemennt->The next greater element of some element x in an array is the 
rist greater elelmnt that is to the right of x in the same array.
arr=[6,8,0,1,3]
nest Greater=[8,-1,1,3,-1]

Note:-this question has 4 types
1.next greater right:-solve already in bottom 
2.next greater left:for(int i=0;i<n;i++)
3.next small right:- for(int i=n-1;i>=0;i--) && arr[s.peek()] >= arr[i]
4.next small left:-for(int i=0;i<n;i++) && arr[s.peek()] >= arr[i]






import java.util.*;
public class part01 {

    public static void nestGre(int arr[]){  //O(n)
        Stack<Integer> s=new Stack<>();
        int nestGreater[]=new int[arr.length];
        int n=arr.length;
        for(int i=n-1;i>=0;i--){ 

            //1 while
            while(!s.isEmpty() && arr[s.peek()] <= arr[i]){
               s.pop();
            }

            //2 if-else
            if(s.isEmpty()){
                nestGreater[i]=-1;
            }
            else{
                nestGreater[i]=arr[s.peek()];
            }

            //3 push in s
            s.push(i);
        }

        for(int i=0;i<nestGreater.length;i++){
            System.out.print(nestGreater[i]+" ");
        }
    } 
    public static void main(String[] args) {
       int arr[]={6,8,0,1,3};
       nestGre(arr);
    }
}

*/

/* 
Question 06:-Valid Parentheses->Given a string s containing just the characters
'(',')','{','}','[' and ']' determine if the input string is valid.
an input string is valid if:
1.Open brackets must be closed by the same type of brackets.
2.Opne bracktes must be closed in the correct order.
3.every close bracket has a conrespinding open bracket of the same type.


Exampe:-
s="()[]{}" ->true;
s="()" ->true
s="(]" ->false
s=")(" ->false


import java.util.*;
public class part01 {

    public static boolean isValid(String str){
        Stack<Character> s=new Stack<>();

        for(int i=0;i<str.length();i++){ //O(n)
            char ch=str.charAt(i);

            if(ch=='(' || ch=='{' || ch=='['){ //opening
                s.push(ch);
            }
            else{
                //closing
                if(s.isEmpty()){
                    return false;
                }

                if( (s.peek() == '(' && ch==')') || (s.peek() == '{' && ch=='}') || (s.peek() == '[' && ch==']')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }

        if(s.isEmpty()){
            return true;
        }
        else{
            return false;
        }

    }
    
    public static void main(String[] args) {
       String str="({})[]"; //true;

       System.out.println(isValid(str));
    }
}
*/

//Duplicate parentheses :-08
/* 
->Given a balanced expression,find if it contains duplicate parentheses or not
A set of parentheses are duplicate if the same subexpression is surrounded by 
multiple parentheses.

return a true if it contains duplicates else return false.

Example:(((a+(b)))*(c+d))  :-true
        ((((a)+(b))c+d))   :-true
        ((a+b)+(c+d))      :-false
        (((a+b))+c)        :-true



import java.util.*;
public class part01 {

    public static boolean idDuplicate(String str){
        Stack<Character> s=new Stack<>();

        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);

            //closing
            if(ch==')'){
                int count=0;
                while(s.peek()!='('){
                    s.pop();
                    count++;
                }

                if(count < 1){
                    return true;  //dublicate
                }
                else{
                    s.pop(); //Opening pair
                }
            }

            else{
                //opening
                s.push(ch);
            }
        }
        return false;
    }
    public static void main(String[] args) {
        String str="((a+b))"; //true;
        String str2="(a-b)";  //false
        System.out.println(idDuplicate(str));
    }
}

*/

/* 
Question 09 :-Max Area in Histogram->Given an array of heights representing the 
histogram's bar height where the widht of each bar is 1, return the area of 
the largest rectange in the histogram.

heights={2,1,5,6,2,3}
ans=10;
*/

import java.util.Stack;

public class part01 {
    public static void maxAreaOf(int arr[]) {// O(n)
        int maxArea = 0;
        int nsr[] = new int[arr.length];
        int nsl[] = new int[arr.length];

        // Nest Smaller Right
        Stack<Integer> s = new Stack<>();

        for (int i = arr.length - 1; i >= 0; i--) {
            while (!s.isEmpty() && arr[s.peek()] >= arr[i]) {
                s.pop();
            }
            if (s.isEmpty()) {
                nsr[i] = arr.length;
            } else {
                nsr[i] = s.peek();
            }
            s.push(i);
        }
        // Nest Smaller left

        s = new Stack<>();

        for (int i = 0; i < arr.length; i++) {
            while (!s.isEmpty() && arr[s.peek()] >= arr[i]) {
                s.pop();
            }
            if (s.isEmpty()) {
                nsl[i] = -1;
            } else {
                nsl[i] = s.peek();
            }
            s.push(i);
        }

        // Current area : width=j-i-1=nsr[i]-nsl[i]-1
        for (int i = 0; i < arr.length; i++) {
            int height = arr[i];
            int widht = nsr[i] - nsl[i] - 1;
            int currArea = height * widht;
            maxArea = Math.max(currArea, maxArea);
        }
        System.out.println("max area in histogram = " + maxArea);
    }

    public static void main(String[] args) {
        int arr[] = { 2, 1, 5, 6, 2, 3 };
        maxAreaOf(arr);
    }
}