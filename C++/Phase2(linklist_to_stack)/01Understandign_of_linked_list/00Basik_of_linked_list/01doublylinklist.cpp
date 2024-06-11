
//understanding of doubly link list

/*
//insertion(head,tail and position);

#include<iostream>
using namespace std;

class Node{ 
    public:
     int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};
//taversing a linked list
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


//give length of linked list
int getLength(Node *head){
    int c=0;
    Node *temp=head;
    while(temp!=NULL){
         c++;
        temp=temp->next;
    }
    return c;
}

//insertion at head
void insertAthead(Node *&tail,Node *&head,int d){

    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
else{
    
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
}


//insetion at tail
void insertAtTail(Node *&tail,Node *&head,int d){
 
if(tail ==NULL){
Node *temp=new Node(d);
head=temp;
tail=temp;


}
else{
Node *temp=new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}
  
}


//insertion at position

void insertionAtposition(Node *&head,Node *&tail,int position,int d){
   

   //insert at start
   if(position==1){
    insertAthead(tail,head,d);
    return;
   }

   Node *temp=head;
   int cnt=1;

   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }

//inserting at alst position

if(temp->next==NULL){
    insertAtTail(tail,head,d);
    return;
}

//creating a nnode for d

Node *nodeToinsert=new Node(d);
nodeToinsert->next=temp->next;
temp->next->prev=nodeToinsert;
temp->next=nodeToinsert;
nodeToinsert->prev=temp;


}

int main(){

     //if 
     //Node* head=NULL;
     //Node* tail=NULL;
     //then upper conditiion follow;

    Node *node1=new Node( 10);

    Node *head=node1;
    Node *tail=node1;
    print(head);
  

  cout<<getLength(head)<<endl;

  //insetion at head
//   insertAthead(tail,head,20);
//   insertAthead(tail,head,30);
//   insertAthead(tail,head,40);
//   print(head);



  insertAtTail(tail,head,20);
  insertAtTail(tail,head,30);
  insertAtTail(tail,head,40);
  print(head);


  //insert at position 
  insertionAtposition(head,tail,3,50);
  print(head);
  


    return 0;
}
 */
















//deletion in doubly link list
//delete(head,tail,and any position);



#include<iostream>
using namespace std;

class Node{ 
    public:
     int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }


    ~Node(){
    int value=this->data;
    //memorty free
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;

     }

};
//taversing a linked list
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


//give length of linked list
int getLength(Node *head){
    int c=0;
    Node *temp=head;
    while(temp!=NULL){
         c++;
        temp=temp->next;
    }
    return c;
}

//insertion at head
void insertAthead(Node *&tail,Node *&head,int d){

    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
else{
    
    Node *temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
}


//insetion at tail
void insertAtTail(Node *&tail,Node *&head,int d){
 
if(tail ==NULL){
Node *temp=new Node(d);
head=temp;
tail=temp;


}
else{
Node *temp=new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}
  
}


//insertion at position

void insertionAtposition(Node *&head,Node *&tail,int position,int d){
   

   //insert at start
   if(position==1){
    insertAthead(tail,head,d);
    return;
   }

   Node *temp=head;
   int cnt=1;

   while(cnt<position-1){
    temp=temp->next;
    cnt++;
   }

//inserting at alst position

if(temp->next==NULL){
    insertAtTail(tail,head,d);
    return;
}

//creating a nnode for d

Node *nodeToinsert=new Node(d);
nodeToinsert->next=temp->next;
temp->next->prev=nodeToinsert;
temp->next=nodeToinsert;
nodeToinsert->prev=temp;


}





//deletion in doubly link list
void deleteNode(int position,Node* &head){
    
    //deleting first or  start node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=head->next;

        //memory free start node
        temp->next=NULL;
        delete temp;

    }
    //deleting any middle or last node
    else{
        Node* curr=head;
        Node* prev=NULL;

        int  cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        

       curr->prev=NULL;
       prev->next=curr->next;
       curr->next=NULL;
       delete curr;

    }
}






int main(){

     //if 
     //Node* head=NULL;
     //Node* tail=NULL;
     //then upper conditiion follow;

    Node *node1=new Node( 10);

    Node *head=node1;
    Node *tail=node1;
    print(head);
  

  //cout<<getLength(head)<<endl;

  //insetion at head
//   insertAthead(tail,head,20);
//   insertAthead(tail,head,30);
//   insertAthead(tail,head,40);
//   print(head);



  insertAtTail(tail,head,20);
  insertAtTail(tail,head,30);
  insertAtTail(tail,head,40);
  print(head);


  //insert at position 
  insertionAtposition(head,tail,3,50);
  print(head);





  //deletion
deleteNode(1,head);
print(head);

deleteNode(4,head);
print(head);
  


    return 0;
}


