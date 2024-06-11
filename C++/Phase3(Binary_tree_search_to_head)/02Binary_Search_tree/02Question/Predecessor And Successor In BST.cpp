//not working correctly


/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{   //find key
    TreeNode* t=root;
    int pred=-1;
    int succ=-1;

    while(t->data!=key){
        if(t->data  > key){
            succ=t->data;
            t=t->left;
            
        }

        else{
            pred=t->data;
            t=t->right;
            
        }
    }

    //pred and succ
    TreeNode* lt=t->left;
    while(lt!=NULL){
        pred=lt->data;
        lt=lt->right;
        
        
    }


    //succ
    TreeNode* rt=t->right;
    while(rt!=NULL){
        succ=rt->data;
        rt=rt->left;
    }
    pair<int, int> ans=make_pair(pred,succ);
    return ans;

}