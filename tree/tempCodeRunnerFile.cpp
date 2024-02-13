void  preorder(struct node* root){
    if(root!=NULL){
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
        
    }
}