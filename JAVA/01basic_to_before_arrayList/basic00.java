/* 
 1) What is Java?
 ans:-Java is the high-level, object-oriented, 
 robust, secure programming language, platform-independent, 
 high performance, Multithreaded, and portable programming language. 
 It was developed by James Gosling in June 1991. It can also be known 
 as the platform as it provides its own JRE and API.
*/



/* 

->diffrence between c++ and java
 c++                                           java
 1.it is platform dependent.                   1.it is platform independent.
 2.it supports goto statement,                 2.it does not support goto statement
 operator overloading,pointer and               operator overloading pointer,multple inheritance
 multiple inheritance.                          but it can be achived by interfaces.
 3.it use a compiler.                          3.it uses compiler and interpreter.
 4.it supports call by vlaue and               4.it supports only call by value.
 call by refernce.
 5.memory management is done using             5.memory  management is done by the system.
 a pointer.
*/

/* 
 * what is JVM,JRE, AND JDK?
 1.JVM(JAVA VIRTUAL MACHINE):-is a virtual machine that provides runtime 
 environment to execute java byte code.the JVM doen't understand java code
 directly,that's why you need t compile your *.java files to obtain *.class
 file that contain the bytecodes understandable by the JVM.
 
 2.JRE(JAVA RUNTIME ENVIRONMENT):-The java runtime environment(JRE) provides the
 libraries,the java virtual machine, and other components to run appets and applications written in the java programming language.
 JRE does not contain tools and utilities such as compilers or debuaager for developing applets and applications.

 3.JDK(JAVA DEVELOPMENT KIT):-The Java Development Kit (JDK) is a software development environment which is used to develop Java applications and applets. 
 It physically exists. It contains JRE + development tools.
*/




/* 
 ->java token:-
 Token are each individual elements of a programming language.
 to understand the concept tf tokens we can that tokens are KILSO/KILPO.
 K-KEYWORDS
 I-IDENTIFIERS
 L-LITERALS (CONSTANTS)
 P/S-PUNCTUALRORS/SEPERATORS
 O-OPERATORS


 1.KEYWORD:-
 keyword are the reserved words that are specific to a programming language.
 like:int,float,char,double,if,while,do,for,public,private,protected etc.

 2.Identifers:-
 identifiers are the names given to any function/class/variable etc.there are 
 some certain rules for naming identifiers;

 ->variable:-
 variable is used to store values. values store in it can be changed 
 at  aby point of time as and when required.
 for example:-int a,float b,int,a,b;


 ->Data types:-
 A datatype defines the type of data a variable will store.
 for example:int float char double,long,boolean.
 There are two types of data types in Java:
 1.Primitive data types: The primitive data types include boolean, char, byte, short, int, long, float and double.
 2.Non-primitive data types: The non-primitive data types include Classes, Interfaces, and Arrays.
 

 ->Data Type	Default Value	Default size
   byte	        0	                 1 byte
   boolean	    false	             1 bit 
   char	        '\u0000'	         2 byte
   short	      0	                 2 byte
   int	        0	                 4 byte
   float	    0.0f	               4 byte
   long	        0L	               8 byte
   double	    0.0d	               8 byte

*/



/* 
 Why does Java not support pointers?
 ans:-
 The pointer is a variable that refers to the memory address.
 They are not used in Java because they are unsafe(unsecured) and complex to understand.
*/

/*----------------------------------------------------------------------------
Count Digits
Difficulty: EasyAccuracy: 30.45%Submissions: 254K+Points: 2
Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Examples :

Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.
Input: n = 2446
Output: 1
Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.
Input: n = 23
Output: 0
Explanation: 2 and 3, none of them divide 23 evenly.
Expected Time Complexity: O(n)
Expected Space Complexity: O(1)
 

Constraints:
1<= n <=105

class Solution{
    static int evenlyDivides(int N){
        
        int  c=0;
        int n=N;
        while(n!=0){
            int  k=n%10;
            if(k>0){
                if(N%k==0){
                c++;
                }
            }
            
            n=n/10;
        }
        
        return c;
        
    }
}



----------------------------------------------------------------------------
7. Reverse Integer
Solved
Medium
Topics
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1

class Solution {
    public int reverse(int x) {

       
        
        int s=0;
        while(x!=0){
            int k=x%10;
            if(s>Integer.MAX_VALUE/10 || s<Integer.MIN_VALUE/10){
                return 0;
            }
            s=s*10+k;
            x=x/10;
        }
        return s;
    }
}

----------------------------------------------------------------------------
9. Palindrome Number
Solved
Easy
Topics
Companies
Hint
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1


class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){
           return false;
       }
        int k=x;
         long long int sum=0;
       while(x!=0){
         int k=x%10;
         sum=sum*10+k;
         x=x/10;
       }

        if(sum==k){
           return true;
       }
       
           return false;
       
      
    }
};



----------------------------------------------------------------------------
Sum of all divisors from 1 to n
Difficulty: EasyAccuracy: 43.37%Submissions: 135K+Points: 2
Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

Example 1:

Input:
N = 4
Output:
15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15
Example 2:

Input:
N = 5
Output:
21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
ans = F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6
    = 21
Your Task:  
You don't need to read input or print anything. Your task is to complete the function sumOfDivisors() which takes an integer N as an input parameter and returns an integer.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 106

class Solution{
    static long sumOfDivisors(int N){
        long  s=0;
        for(int i=1;i<=N;i++){
            s+=(N/i)*i;
        }
        return s;
    }
----------------------------------------------------------------------------

----------------------------------------------------------------------------


----------------------------------------------------------------------------


----------------------------------------------------------------------------

----------------------------------------------------------------------------


----------------------------------------------------------------------------
*/



public class basic00 {
    public static void main(String[] args) {
        
    }
    
}
