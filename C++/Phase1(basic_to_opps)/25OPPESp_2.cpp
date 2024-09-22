/*
//encapsulation->wrapping up data member and function
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;
    
    public:
    int getAge(){
        return this->age;
    }
    
};

int main()
{
   Student fisrt;
   cout<<"encapsulation is working"<<endl;
   
    return 0;
}
*/
/*
accessmodifier Inheritance =reseult
public          public=     public
public          private=    private
public          protected=  protected


protected     public  =     protected
protected     protected=   protected
protected     private =   private



private      public   =  not access
private      protected=  not access
private      private=    not access

*/


/*
//Inheritance->
#include<iostream>
using namespace std;

class Human
{
    public:
    int height;
    int weight;
    int age;
    
    public:
    int getAge(){
        return this->age;
    }
    
    void setWeight(int w){
        this->weight=w;
    }
};

class Male:public Human{
    public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping "<<endl;
    }
    
};

int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
    
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    return  0;
}

*/




/*
//Inheritance->
#include<iostream>
using namespace std;

class Human
{
    public:
    int height;
    int weight;
    int age;
    
    public:
    int getAge(){
        return this->age;
    }
    
    void setWeight(int w){
        this->weight=w;
    }
};

class Male:private Human{
    public:
    string color;
    
    void sleep(){
        cout<<"Male sleeping "<<endl;
    }
    int getHeight(){
        return this->height;
    }
    
};

int main(){
    
    Male m;
    cout<<m.getHeight()<<endl;
    
    return  0;
}


*/




//types of Inheritance
/*
01.single Inheritance
02.multilevel Inheritance
03.multiple Inheritance
04.hybride Inheritance
05.hierarchical Inheritance
*/



//01single Inheritance
/*
#include<iostream>
using namespace std;

class Animal
{
    public:
    int weight;
    int age;
    
    public:
   void speak(){
       cout<<"Speaking"<<endl;
   }
};

class Dog:public Animal{
   
    
};

int main(){
   Dog d;
   d.speak();
    return  0;
}
*/



/*
//02multilevel Inheritance

#include<iostream>
using namespace std;

class Animal
{
    public:
    int weight;
    int age;
    
    public:
   void speak(){
       cout<<"Speaking"<<endl;
   }
};

class Dog:public Animal{
   
    
};

class GermanShepher:public Dog{
    
};

int main(){
   GermanShepher g;
   g.speak();
    return  0;
}

*/



/*

//03multiple Inheritance

#include<iostream>
using namespace std;

class Animal
{
    public:
    int weight;
    int age;
    
    public:
   void bark(){
       cout<<"Barking"<<endl;
   }
};


class Human{
    public:
   string color;
   public:
   void speak(){
       cout<<"speaking"<<endl;
   }
   
};

//multiple Inheritance
class Hybride: public Animal,public Human{
    
};

int main(){
  
  Hybride ob;
  ob.speak();
  ob.bark();
  
    return  0;
}


*/


/*
//04.hierarchical Inheritance

#include<iostream>
using namespace std;

class A
{
   public:
   void func1(){
       cout<<"Inside fucntion 1"<<endl;
   }
};

class B:public A
{
   public:
   void func2(){
       cout<<"Inside fucntion 2"<<endl;
   }
};



class C:public A
{
   public:
   void func3(){
       cout<<"Inside fucntion 3"<<endl;
   }
};

int main(){
  
 A obj1;
 obj1.func1();
 
 B obj2;
 obj2.func1();
 obj2.func2();
 
 C obj3;
 obj3.func1();
 obj3.func3();
  
    return  0;
}


*/




/*
//05Hybride Inheritance
#include<iostream>
using namespace std;

class A
{
   public:
   void func1(){
       cout<<"Inside fucntion 1"<<endl;
   }
};

class D
{
   public:
   void func4(){
       cout<<"Inside fucntion 4"<<endl;
   }
};


class B:public A
{
   public:
   void func2(){
       cout<<"Inside fucntion 2"<<endl;
   }
};



class C:public A,public D
{
   public:
   void func3(){
       cout<<"Inside fucntion 3"<<endl;
   }
};

int main(){
  
 A obj1;
 obj1.func1();
 
 D obj4;
 obj4.func4();
 
 B obj2;
 obj2.func1();
 obj2.func2();
 
 C obj3;
 obj3.func1();
 obj3.func3();
 obj3.func4();
  
    return  0;
}

*/








/*
//Inheritance Ambiguity
#include<iostream>
using namespace std;

class A
{
   public:
   void func(){
       cout<<"I am A"<<endl;
   }
};

class B
{
   public:
   void func(){
       cout<<"I am B"<<endl;
   }
};



class C:public A,public B
{
  
};

int main(){
 C ob;
 //rong
 //ob.func();
 ob.A::func();
 ob.B::func();
  
    return  0;
}

*/


/*
//polymorphism
tow types of polymorphism
01.compile time polymorphism
there area two types polymorphism 
a->function overloding
b-> operator overloding
02.run time polymorphism
*/

/*
//01.compile time polymorphism
//a.function overloding
#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello ankit kumar"<<endl;
    }
    
    int sayHello(string name,int n){
        cout<<"ankit kuamr "<<endl;
        return 1;
    }
    
    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();
    
    return 0;
}

*/



/*

//01.compile time polymorphism
//b.operator overloding
#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello ankit kumar"<<endl;
    }
    
    int sayHello(string name,int n){
        cout<<"ankit kuamr "<<endl;
        return 1;
    }
    
    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }
};

class B{
    public:
    int a;
    int b;
    
    public:
    int add(){
        return a+b;
    }
    
    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output"<<value2-value1<<endl;
    }
    
};

int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    
    obj1+obj2;
    
    return 0;
}


*/

/*
//02.run time polymorphism;
#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
    
};

class Dog:public Animal{
    public:
    void speak(){
       cout<<"Barking"<<endl; 
    }
};
int main(){
    Dog obj;
    obj.speak();
   
    return 0;
}

*/




//**Abstreaction**//
//Implementatiion Hiding




