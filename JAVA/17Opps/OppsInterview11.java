/* 

What is an object in Java.
Ans:-
An object is an instance of a class. A class is a template or blueprint from which objects are created. So, an object is the instance(result) of a class.

Object Definitions:-
An object is a real-world entity.
An object is a runtime entity.
The object is an entity which has state and behavior.
The object is an instance of a class.

For Example, Pen is an object. Its name is Reynolds; color is white, known as its state. It is used to write, so writing is its behavior.



An object has three characteristics:

State: represents the data (value) of an object.
Behavior: represents the behavior (functionality) of an object such as deposit, withdraw, etc.
Identity: An object identity is typically implemented via a unique ID. The value of the ID is not
visible to the external user. However, it is used internally by the JVM to identify each object uniquely.
---------------------------------------------------------------------


What is a class in Java:-
A class is a group of objects which have common properties. It is a template or
blueprint from which objects are created. It is a logical entity. It can't be physical.

or
->class is a user difine data type,which hold its own datta member,member function which can be accessed and used by creating an instance of class.


A class in Java can contain:

Fields
Methods
Constructors
Blocks
Nested class and interface


------------------------------------------------
new keyword in Java
The new keyword is used to allocate memory at runtime. All objects get memory in Heap memory area.

----------------------------------------------------------------
OOPs (Object-Oriented Programming System)
Object-Oriented Programming is a methodology or paradigm to design a
program using classes and objects. It simplifies software development and
maintenance by providing some concepts:
-----------------------------------------------------------------------------------------------------------

->Getter and Setters
get:to return the value
set:to modify the value

this keyword:-this keyword is used to refer to the current object.


-----------------------------------------------------------------------------------------------------------
Opps has 4 piller in  java.

1.Encapsulation
2.Inheritance
3.Polymorphism
4.Abstraction
------------------------------------------------------------------------------------------------------------
1.Encapsulation in Java.
Encapsulation in Java is a process of wrapping code and data together into a single
unit, or example, a capsule which is mixed of several medicines.

->Advantage of Encapsulation in Java:-
It is a way to achieve data hiding in Java because other class will not be able to access the data through the private data members.




Simple Example of Encapsulation in Java:-

/class Student{
    public String name;
    
    public String getName(){
    return name;
    }
    
    public void setName(String name){
        this.name=name;
    }
}

public class OppsInterview11{
    public static void main(String[] args) {
        
        Student s=new Student();
        s.setName("Ankit");
        System.out.println(s.getName());
    }
}

Output:Ankit

---------------------------------------------------------------------------------
2.Inheritance in java:-
Inheritance in Java is a mechanism in which one object acquires all the properties and behaviors of a parent object.

->Why use inheritance in java
For Method Overriding (so runtime polymorphism can be achieved).we are discuss next classes.
For Code Reusability.

->The extends keyword indicates that you are making a new class that derives from an existing class. 
The meaning of "extends" is to increase the functionality.


->Types of inheritance in java
 ->there are four types in java
 01.single level inheritance
 ->example         Animal
                    |
                    derived class
 

 02.multilevel inheritance
 ->example         Animal
                    |
                    derived class
                    |
                    derived class


 03.hiertarchial Inheritance
   ->example       Animal
                   |   |
       derived class   derived class
                    


 04.Hybrid in heritance
 ->example       Animal
                   |   |
       derived class   derived class
                          |
                          derive class so on




 //Example of single level inheritance
public class Opps08 {
    public static void main(String args[]){
        Fish f1=new Fish();
        f1.breathe();;
        f1.eat();
        f1.Swim();
    
    
 }
}

//base class
class Animal{
    String color;
    void eat(){
        System.out.println("eats");
    }

    void breathe(){
        System.out.println("brathes");

    }
}


//derived class
//here extends->means Fish class Animal class ki sari properties le
//rahi hai
class Fish extends Animal{
    void Swim(){
        System.out.println("swims in water");
    }

}     
    


////////////////////////////////////
//02.multilevel inheritance example
public class Opps08 {
    public static void main(String args[]){
        Dog f1=new Dog();
        f1.breathe();;
        f1.eat();
        f1.Swim();
        f1.Barking();
    
    
 }
}

//base class
class Animal{
    String color;
    void eat(){
        System.out.println("eats");
    }

    void breathe(){
        System.out.println("brathes");

    }
}



class Mammal extends Animal{
    void Swim(){
        System.out.println("swims in water");
    }

}

class Dog extends Mammal{
    void Barking(){
        System.out.println("dog is barking");
    }
}
////////////////////////////////////////////
//03.Hirachial inheritance example
public class Opps08 {
    public static void main(String args[]){
        Dog f1=new Dog();
        f1.breathe();;
        f1.eat();
        //f1.walking();
        f1.Barking();
    
    
 }
}

//base class
class Animal{
    String color;
    void eat(){
        System.out.println("eats");
    }

    void breathe(){
        System.out.println("brathes");

    }
}



class Mammal extends Animal{
    void Walk(){
        System.out.println("mammal is walking");
    }

}

class Dog extends Animal{
    void Barking(){
        System.out.println("dog is barking");
    }
}
/////////////////////////////////////////////////
//04.Hybrid inheritance example
public class Opps08 {
    public static void main(String args[]){
        Tiger f1=new Tiger();
        f1.breathe();;
        f1.eat();
        f1.Walk();
        //f1.Barking();
        f1.Tiger();;
    
    
 }
}

//base class
class Animal{
    String color;
    void eat(){
        System.out.println("eats");
    }

    void breathe(){
        System.out.println("brathes");

    }
}



class Mammal extends Animal{
    void Walk(){
        System.out.println("mammal is walking");
    }

}


class Tiger extends Mammal{
    void Tiger(){
        System.out.println("tiger is king of forest");
    }
}

class Dog extends Animal{
    void Barking(){
        System.out.println("dog is barking");
    }
}
/////////////////////////////////////////
-------------------------------------------------------------------------------------------
03.Polymorphism in Java:-
Polymorphism in Java is a concept by which we can perform a single action in
different ways. Polymorphism is derived from 2 Greek words: poly and morphs. The
word "poly" means many and "morphs" means forms. So polymorphism means
many forms.


->Two type of polymorphism
 -01Compile Time polymorphism->(static poly..)(we can perform compile time polymorhpism in java by method overloading)
  .method overloding->multiple funciton with the same name but diffrent parametes
 -02Run Time Polymorphism->(dynamic poly..)(we can perform run time polymorhpism in java by method overriding)
  .method Overriding->parent and child classes both contain the same funciton with a diffrent defination.


  //Polymorphism
//01.compile time polymorphism
public class Opps08 {
    public static void main(String args[]){

        
    Calculator cal=new Calculator();
    System.out.println(cal.sum(1,2));
    System.out.println(cal.sum((float)1.5,(float)2.5));
    System.out.println(cal.sum(1,2,4));
    
 }
}


class Calculator{
    int sum(int a,int b){
        return a+b;
    }

    float sum(float a,float b){
        return a+b;
    }

    int sum(int a,int b,int c){
        return a+b+c;
    }
}


//Polymorphism
//02.Run Time Polymorphism 
public class Opps08 {
    public static void main(String args[]){

        
    Deer d=new Deer();
    d.eat();

    
 }
}


class Animal{
   void eat(){
    System.out.println("eats anyting");
   }
}


class Deer extends Animal{
    void eat(){
        System.out.println("eats grass");
    }
}


----------------------------------------------------------------------------------------------
04.Abstraction in Java.
Abstraction is a process of hiding the implementation details and showing only functionality to the user.

->there are two type in java 

 01.Abstract  Classes ->kise phi class ko abstrack banane ke
 liye uske  aage abstract class likh dete hai.
 
 ->like->abstract class{

 }

 ->properties of abstract
 01.Cannot create an instance or object of abstract class.
 02.Can have abstract/non0abstract method.
 03.Can have constructors.
 04.An abstract class must be declared with an abstract keyword.
 

 01.exaple of abstract classes
 import java.util.*;
public class Opps08 {
    public static void main(String args[]){
    Horse h=new Horse();
    h.eat();
    h.walk();
    System.out.println(h.color);


    Chicken c=new Chicken();
    c.eat();
    c.walk();

    //Animal a=new  Animal();//abstract class ka oject nahi create hota hai
 }
}


abstract class Animal{
    String color;
    Animal(){
        color="brown";

    }




    void eat(){
        System.out.println("animal eats");
    }

    abstract void walk();
    
}


class Horse extends Animal{

    void changeColor(){
        color="dark brown";
    }
    void walk(){
        System.out.println("walks on  4 leg");
    }
}


class Chicken extends Animal{

    void changeColor(){
        color="yellow";
    }
    void walk(){
        System.out.println("walk on 2 leg");
    }

}



////////////////////////////////////////////////////
 -02.Interfaces->Interface is a blue print of a class.
 ->use of Interfaces->
 --->multiple inheritance(5th)
 --->total (100%)abstraction(interfaces)


 ->properites of interfaces
  --->define interface like this-> Interface-implements and class-extends
  --->all method are public,abstract and without implementation
  --->used to achieve total abstraction
  --->Variables in the interface are final,puble and static.
 
    //02.Interfaces in java
public class Opps08 {
    public static void main(String args[]){

        Queen q=new Queen();
        q.moves();
    

 }
}



interface ChessPlayer{
    void moves();
}


class Queen implements ChessPlayer{ //interface ke liye extends nahi implements likha jata hai
     public void moves(){ //public likhege taki default type ka na ho
        System.out.println("up ,down left,right,diagonalIinall 4 direction");
     }
}





class Rook implements ChessPlayer{ //interface ke liye extends nahi implements likha jata hai
     public void moves(){ //public likhege taki default type ka na ho
        System.out.println("up ,down left,right");
     }
}



class King implements ChessPlayer{ //interface ke liye extends nahi implements likha jata hai
     public void moves(){ //public likhege taki default type ka na ho
        System.out.println("up ,down left,right,diagonalb(by 1 step)");
     }
}


------------------------------------------------------------------------------------------------------------------------------------------

->Question:-can constructor make be static or not if not then?
Ans:-In Java, constructors can't be static because the static keyword belongs to a class, 
while constructors are called when an object of a class is created. Also, a static constructor can't be accessed from a subclass. 



->Question:-Can a Constructor be final in Java ?
Ans:-No, a constructor can't be made final. A final method cannot be overridden by any subclasses. 
As mentioned previously, the final modifier prevents a method from being modified in a subclass. 
The main intention of making a method final would be that the content of the method should not be changed by any outsider.



Question:-Purpose of the final Keyword:
->The final keyword in Java is used to restrict the modification of a method, variable, or class.
->When applied to a method, final means that the method cannot be overridden by subclasses.
->When applied to a class, it prevents the class from being subclassed.
->When applied to a variable, it makes the variable a constant, meaning its value cannot be changed once initialized.


Question:-why inheritance not implemnt multiple inheheitance.
Ans:-The reason behind this is to prevent ambiguity. 
->Whenever a sub class wants to inherit the property of two or more super  class
that have same method.java compiler can't decide which class mehtod it should inherit;
ex-       Class A       Class B
           \            /
            \          /
             \        /
              Class C(confuse)



Question:-multiple inheritance using interface in java.
Ans:-we can achieve multiple inheritance through interfaces because interface contains only  "abstract method"
which implementation is provide by the sub classes. 

ex-       Class A       Class B
           \            /
            \          /
             \        /
              Class C

class c extends a,b ->false 
class c implements a,b ->true   



Question:-diffrence between collecation and collections.
Ans:-
->Collection is called interface(an interface specifies the behavior of a class by providing an abstract type.) in java.
It represents a group of objects;
ex:-ArrayList, HashSet, LinkedList, TreeSet, etc.

->Collections is a utility class that provides static methods to perform operations on collections, such as sorting, searching, and reversing.
ex-sort(), reverse(), shuffle()
->both of them can be found in java. util. package.





Question:-diffrence between abstract class and interfaces.
Ans:-
Abstract class	Interface
1) Abstract class can have abstract and non-abstract methods.	                              Interface can have only abstract methods. Since Java 8, it can have default and static methods also.
2) Abstract class doesn't support multiple inheritance.	                                      Interface supports multiple inheritance.
3) Abstract class can have final, non-final, static and non-static variables.	              Interface has only static and final variables.
4) Abstract class can provide the implementation of interface.	                              Interface can't provide the implementation of abstract class.
5) The abstract keyword is used to declare abstract class.	                                  The interface keyword is used to declare interface.
6) An abstract class can extend another Java class and implement multiple Java interfaces.	  An interface can extend another Java interface only.
7) An abstract class can be extended using keyword "extends".	                              An interface can be implemented using keyword "implements".
8) A Java abstract class can have class members like private, protected, etc.	              Members of a Java interface are public by default.
9)Example:
public abstract class Shape{
public abstract void draw();
}	Example:
public interface Drawable{
void draw();
}


Q1. Can Constructors be overloaded in Java? 
Yes, constructors can be overloaded in Java by providing multiple constructors with different parameter lists.



*/

import java.util.Scanner;

public class OppsInterview11 {
    public static void main(String[] args) {
        int a = 10;
        System.out.println(a);
    }
}
