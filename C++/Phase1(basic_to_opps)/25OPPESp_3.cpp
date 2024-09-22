//friend function
//friend function declear in class but define is outside of class
//frend function not member funciton so u can difene public,private or protacted;

//p1-sum two variable using friend funtion
/*
#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<a<<" "<<b<<endl;
    }
    
    friend void sum(complex);
    
};

void sum(complex c){
    cout<<"sum is"<<c.a+c.b<<endl;
}

int main()
{
    
    complex c1,c2,c3;
    c1.setData(4,5);
    c1.showData();
    sum(c1);
    
   return 0;
}
*/







/*
//p2-sum of two class using c++


#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void setData(int x){
        a=x;
    }
    friend void add(A,B);
};



class B{
    int b;
    public:
    void setData(int y){
        b=y;
    }
    friend void add(A,B);
};

void add(A c1,B c2){
    cout<<"sum of :"<<c1.a+c2.b;
}



        
int main()
{  A c1;
   B c2;
    c1.setData(5);
    c2.setData(10);
    add(c1,c2);
    
    
   

    return 0;
}
*/







/*
//overloading of operator as a friend function
#include <iostream>
using namespace std;
class Complex{
  private:
  int a,b;
  public:
  void setData(int x,int y){
      a=x;
      b=y;
  }
  
  void showData(){
      cout<<a<<" "<<b<<endl;
  }
  
  friend Complex operator+(Complex X,Complex Y);

};

Complex operator+(Complex X,Complex Y){
      Complex temp;
      temp.a=X.a+Y.a;
      temp.b=X.b+Y.b;
      return (temp);
  }

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,8);
    c3=c1+c2;   //  or  c3=c1.operator+(c2);
    c3.showData();
    

    return 0;
}
*/









/*
//overloading of operator as a friend function
#include <iostream>
using namespace std;
class Complex{
  private:
  int a,b;
  public:
  void setData(int x,int y){
      a=x;
      b=y;
  }
  
  void showData(){
      cout<<a<<" "<<b<<endl;
  }
  
  friend Complex operator-(Complex);
 
};


  Complex operator-(Complex X){
      Complex temp;
      temp.a=-X.a;
      temp.b=-X.b;
      return (temp);
  }

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2=-c1;  //or c2=c1.operator-();
    c2.showData();
    
   
    

    return 0;
}
*/







#include <iostream>
using namespace std;
class A{
    public:
    void fun(){
    }
    
    void foo(){
        
    }
};

class B{
    // void fun is friend of B;
    friend void A::fun();
    
    //all member function of A friend of B 
    friend class A;
};

int main()
{
   
    

    return 0;
}

