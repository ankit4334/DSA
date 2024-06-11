//understanding  link list and why need ll
//advantage
//dynamic data structure 
//grow and shrink at  run time 
//no memory vastage
//insertion and deletion is easy


//types of linked list
//01.singly ll
//02.doubly ll
//03.circular ll
//04.circular doubly ll

/*

//creating link list
#include<iostream>
using namespace std;
class Node{
     public:
    int data;
    Node *next;



Node(int data){
    this->data=data;
    this->next=NULL;
}



};

int main(){

Node *node1=new Node(10);

cout<<node1->data<<endl;
cout<<node1->next<<endl;




    return 0;
}

*/

//______________________________________\___________________

/*

//01 singly link list
//01.insertion at head in singly link list
#include<iostream>
using namespace std;
class Node{
     public:
    int data;
    Node *next;



Node(int data){
    this->data=data;
    this->next=NULL;
}
};

void InsertAthead(Node* &head,int d){
    
    //create new node

    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

Node *node1=new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

Node* head=node1;
print(head);

InsertAthead(head,20);
print(head);
InsertAthead(head,30);
print(head);

return 0;
}

*/

//_________________________________________________________


/*
//01 singly link list
//02.insertion at tail in singly link list
#include<iostream>
using namespace std;
class Node{
     public:
    int data;
    Node *next;



Node(int data){
    this->data=data;
    this->next=NULL;
}
};

void InsertAtTail(Node* &tail,int d){
    //create new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

Node *node1=new Node(10);

//head pointed to node1
Node* head=node1;
Node* tail=node1;
print(head);

InsertAtTail(tail,20);
print(head);
InsertAtTail(tail,30);
print(head );

return 0;
}
*/

//_________________________________________________________



/*
//01 singly link list
//03.insertion at position in singly link list
#include<iostream>
using namespace std;
class Node{
     public:
    int data;
    Node *next;



Node(int data){
    this->data=data;
    this->next=NULL;
}
};

void InsertAthead(Node* &head,int d){
    //create new node
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}


void InsertAtTail(Node* &tail,int d){
    //create new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){

    //insert at start
    if(position==1){
        InsertAthead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

Node *node1=new Node(10);

//head pointed to node1
Node* head=node1;
Node* tail=node1;
print(head);

//insertion at head

// InsertAthead(head,20);
// print(head);
// InsertAthead(head,30);
// print(head);


//insertion at tail
InsertAtTail(tail,20);
print(head);
InsertAtTail(tail,30);
print(head );


//insertion at position and position start and end

//insert at start
InsertAtPosition(head,tail,1,50);
print(head);


//insert at middle
InsertAtPosition(head,tail,3,60);
print(head);

//insert at last
InsertAtPosition(head,tail,6,70);
print(head);




return 0;
}

*/



//________________________________________________________










//Deletion in link list
//case1.deletenode(position(first,midle,and last))
//case2.deletenode(value)

//case1.
#include<iostream>
using namespace std;
class Node{
     public:
    int data;
    Node *next;


//constructor
Node(int data){
    this->data=data;
    this->next=NULL;
}

//destuctor
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

void InsertAthead(Node* &head,int d){
    //create new node
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}


void InsertAtTail(Node* &tail,int d){
    //create new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){

    //insert at start
    if(position==1){
        InsertAthead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }


    //creating a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;



}


//deletion

void deleteNode(int position,Node* &head){
    
    //deleting first or  start node
    if(position==1){
        Node* temp=head;
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

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

Node *node1=new Node(10);

//head pointed to node1
Node* head=node1;
Node* tail=node1;
print(head);

//insertion at head

// InsertAthead(head,20);
// print(head);
// InsertAthead(head,30);
// print(head);


//insertion at tail
InsertAtTail(tail,20);
print(head);
InsertAtTail(tail,30);
print(head );


//insertion at position and position start and end

//insert at start
InsertAtPosition(head,tail,1,50);
print(head);


//insert at middle
InsertAtPosition(head,tail,3,60);
print(head);

//insert at last
InsertAtPosition(head,tail,6,70);
print(head);



//deletion
deleteNode(1,head);
print(head);

deleteNode(4,head);
print(head);


return 0;
}
