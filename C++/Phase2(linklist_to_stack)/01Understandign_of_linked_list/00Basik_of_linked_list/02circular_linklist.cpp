//03.circular link list understanding
//in circular ll not use head pointer work properly using tail pointer

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node data"<<value<<endl;
    }
};

//traversal cll
void print(Node* &tail){

    Node* temp=tail;

    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;

}



//insertion cll
void InsertNode(Node* &tail,int element,int d){

    //if list is empty
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }

    else{
        //non-empty list
        //assuming that the element is present in the list 
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
         
         //element found->curr is representing element wala node
         Node* temp=new Node(d);
         temp->next=curr->next;
         curr->next=temp;
         
    }

}









//deletion in cll

void deleteNode(Node* &tail,int value){

    //if list is empty
    if(tail==NULL){
        cout<<"List is empty,pleasee cheak again"<<endl;
        return;  
    }
    else{
        //non-empty case 
        //assume that "value" is presant is the link list
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //if 1 node in linked  list;
        if(curr==prev){
            tail=NULL;
        }
       

        //>=2 node linked list
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

          
    }

}



int main(){


  Node* tail=NULL;
  InsertNode(tail,5,3);
  print(tail);

  InsertNode(tail,3,5);
  print(tail);

  InsertNode(tail,5,7);
  print(tail);

  InsertNode(tail,7,9);
  print(tail);


  //delete node
  deleteNode(tail,3);
  print(tail);



    return 0;
}