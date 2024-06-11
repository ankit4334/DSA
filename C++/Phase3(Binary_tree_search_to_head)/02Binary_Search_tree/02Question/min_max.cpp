//finding the min value of the bst

Node* minVal(Node* root){
    Node* t=root;
    while(t->left!=NULL){
        t=t->next;
    }

    return t;
}





//finding the max value of the bst

Node* maxVal(Node* root){
    Node* t=root;
    while(t->right!=NULL){
        t=t->next;
    }

    return t;
}