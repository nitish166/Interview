int maxNodeLevel(Node *root)
{
 // Add your code here
  if(root==NULL)
  {
      return -1;
  }
  
  queue<Node *> q;
  q.push(root);
  
  // current level
  int level =0;
  
  int max = INT_MIN;
  
  // level having maximum node
  
  int level_no = 0;
  
  while(1)
  {
      // count nodes in a level
      int node_count = q.size();
      
      if(node_count==0)
      {
          break;
      }
      
      if(node_count>max)
      {
          max = node_count;
          level_no = level;
      }
      
      // pop complete current level
      
      while(node_count > 0)
      {
          Node* node = q.front();
          q.pop();
          if(node->left !=NULL)
          {
              q.push(node->left);
          }
          if(node->right !=NULL)
          {
              q.push(node->right);
          }
          node_count--;
      }
      // increment for next level
      level++;
  }
  
    return level_no;
}