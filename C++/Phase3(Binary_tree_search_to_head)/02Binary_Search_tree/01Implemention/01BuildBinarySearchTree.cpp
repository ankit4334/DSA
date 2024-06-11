#include<iostream>
#include<queue>
using namespace std;

class  Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};



//inoder
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


//preoder
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}



//postoder
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
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



//finding the min value of the bst

Node* minVal(Node* root){
    Node* t=root;
    while(t->left!=NULL){
        t=t->left;
    }

    return t;
}





//finding the max value of the bst

Node* maxVal(Node* root){
    Node* t=root;
    while(t->right!=NULL){
        t=t->right;
    }

    return t;
}




//Delete from BST
Node* deleteFromBST(Node* root,int val){
    //base case
    if(root==NULL){
        return root;
    }

    if(root->data==val){
        //0 child 
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* t=root->left;
            delete root;
            return t;

        }

        //right child
        if(root->left==NULL && root->right!=NULL){
            Node* t=root->right;
            delete root;
            return t;
        }


        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
    }
    else if(root->data > val){//left part me jao
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{//right part me jao
        root->right=deleteFromBST(root->right,val);
        return root;
    }

}




Node* insertIntoBST(Node* &root,int d){
     //base case
     if(root==NULL){
        root=new Node(d);
        return root;
     }

    if(d>root->data){
        //right part me inset karna h
        root->right=insertIntoBST(root->right,d);
    }
    else{
        //left part me insert karna h
         root->left=insertIntoBST(root->left,d);
        }
        return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}


int main(){

    Node* root=NULL;

    cout<<"Enter data to create BST:"<<endl;
    takeInput(root);


    //deletetion of node;
    root=deleteFromBST(root,30);

    //10 8 21 7 27 5 4 3 -1
    cout<<"Printig the BST"<<endl;
    levelOrderTraversal(root);


    cout<<"Pringing Inoder "<<endl;
    inorder(root);

    cout<<endl<<"Pringing preoder "<<endl;
    preorder(root);

    cout<<endl<<"Pringing postorder "<<endl;
    postorder(root);




    //print max and min value
    cout<<endl;
    cout<<"Min value is "<<minVal(root)->data<<endl;
    cout<<"Max value is "<<maxVal(root)->data<<endl;



    

    return 0;
}