
//Function to push an element into stack using two queues.
void QueueStack :: push(int ele)
{
    if(q2.empty())
    {
        q1.push(ele);    
    }
    
    else{
         q2.push(ele); 
    }
    
    
}



//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    
    if(q1.empty() && q2.empty()){
        return -1;
    }
    
    
       
    if(!q1.empty() &&  q2.empty() ){
        

          while(!q1.empty() && q1.size() !=1){
              q2.push(q1.front());
              q1.pop();
          }      
          
          if(q1.size()==1){
              int ans = q1.front();
              q1.pop();
              return ans;
          }
      
    
    }
    
    
    else{
        
    
      while(!q2.empty() && q2.size() !=1){
          q1.push(q2.front());
          q2.pop();
      }      
      
      if(q2.size()==1){
          int ans = q2.front();
          q2.pop();
          return ans;
      }
      
        
    } 
      
      
      
      
      
      
      
}