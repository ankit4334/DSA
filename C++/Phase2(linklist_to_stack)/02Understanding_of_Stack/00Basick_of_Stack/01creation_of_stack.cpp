//operation of stack
/*
#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creattion of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();
     
    cout<<"pringing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }

    else{
        cout<<"Stack is NOt empty"<<endl;
    }
    
   cout<<"size of stack "<<s.size()<<endl;

    return 0;
}

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
















//reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
   string str="ankit";
   stack<char> s;

   for(int i=0;i<str.length();i++){
    char ch=str[i];
    s.push(ch);
   }

   string ans="";
   while(!s.empty()){
    char ch=s.top();
    ans.push_back(ch);
    s.pop();
   }

   cout<<"answer is "<<ans<<endl; 

    return 0;
}



