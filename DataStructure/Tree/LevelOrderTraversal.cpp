// Level Order Traversal of Tree using Queue
// Time Complexity : O(n)
void levelOrder(Node* node)
{
  //Your code here
  if(node==NULL)
  {
      return;
  }
  
  queue <Node* >q;
  q.push(node);
  while(q.empty()==false)
  {
      Node* temp = q.front();
      cout<<temp->data<<" ";
      q.pop();
      
      if(temp->left !=NULL)
      {
          q.push(temp->left);
      }
      
      if(temp->right)
      {
          q.push(temp->right);
      }
  }
}