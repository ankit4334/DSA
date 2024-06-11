
#include <iostream>
using namespace std;

 void sum(int a,int b){
    cout<<a+b;
}

void sub(int a,int b){
    cout<<a-b;
}

void mul(int a,int b){
    cout<<a*b;
}

void divi(int a,int b){
    cout<<a/b;
}


int main()
{
   int a,b,ch;
   
   void(*ptr[4])(int,int)={sum,sub,mul,divi};
   
   cout<<"enter a and b"<<endl;
   cin>>a>>b;
   
   cout<<"enter choice"<<endl;
   cin>>ch;
   
   ptr[ch](a,b);
   

    return 0;
}

