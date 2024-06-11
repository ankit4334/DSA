//Implementation of tree

/*
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

  cout<<"Enter data for inserting in left"<<data<<endl;
  root->left=buildtree(root->left);

  cout<<"Enter data for inserting in right of"<<data<<endl;
  root->right=buildtree(root->right);
  return root;
}


void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}



int main(){
    
    node* root=NULL;

    //creation a tree
    root=buildtree(root);

   
    //level order 
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    return 0;
}

*/









/*
//Inorder,Preoder and postorder
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

  cout<<"Enter data for inserting in left"<<data<<endl;
  root->left=buildtree(root->left);

  cout<<"Enter data for inserting in right of"<<data<<endl;
  root->right=buildtree(root->right);
  return root;
}


void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

//inoder
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


//preoder
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}



//postoder
void postorder(node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}




int main(){
    
    node* root=NULL;

    //creation a tree
    root=buildtree(root);

   
    //level order 
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is:";
    inorder(root);
    cout<<endl;


    cout<<"preorder traversal is:";
    preorder(root);
    cout<<endl;

    cout<<"postorder traversal is:";
    postorder(root);
    cout<<endl;


    return 0;
}

*/
































//Inorder,Preoder and postorder
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

  cout<<"Enter data for inserting in left"<<data<<endl;
  root->left=buildtree(root->left);

  cout<<"Enter data for inserting in right of"<<data<<endl;
  root->right=buildtree(root->right);
  return root;
}


void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

//inoder
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


//preoder
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}



//postoder
void postorder(node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}





void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }



int main(){
    
    // node* root=NULL;

    // //creation a tree
    // root=buildtree(root);

   
    // //level order 
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // cout<<"printing the level order traversal output "<<endl;
    // levelOrderTraversal(root);

    // cout<<"inorder traversal is:";
    // inorder(root);
    // cout<<endl;


    // cout<<"preorder traversal is:";
    // preorder(root);
    // cout<<endl;

    // cout<<"postorder traversal is:";
    // postorder(root);
    // cout<<endl;
 
  node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    return 0;
}

   