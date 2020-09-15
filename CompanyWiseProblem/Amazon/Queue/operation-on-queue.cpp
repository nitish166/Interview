void enqueue(queue<int> &s,int x)
{
   //Your code here
  
   s.push(x);
}
 // Function to remove front element from queue
void dequeue(queue<int> &s)
{
    //Your code here
    
    s.pop();
}
 // Function to find the front element of queue
int front(queue<int> &s)
{
    //Your code here
    return s.front();
}
 // Function to find the element in queue. Return "Yes" or "No".
string find(queue<int> s, int val)
{
    //Your code here
    while(!s.empty())
    {
        if(s.front()==val)
        {
            return "Yes";
        }
    }
    return "No";
    
}