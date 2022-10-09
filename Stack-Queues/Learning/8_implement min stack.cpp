
class Solution{
    
    int minEle = INT_MAX;
    stack<int> s;
    
    
    
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(s.empty()){
               return -1;
           }
           
           return minEle;
           
       }
       
       /*returns poped element from stack*/
       
       int pop(){
           
           if(s.empty()){
               return -1;
           }
           
           
           else{
               
               int ans;
               
               if(s.top() >= minEle){
                   ans = s.top();
                   s.pop();
                   return ans;
               }
               
               else{
                   
                   int prev = minEle;
                   
                   minEle = 2*minEle - s.top();
                  
                   s.pop();
                   
                   return prev;
               }
               
               
           }
           
           
           
       }
       
       /*push element x into the stack*/
       
       
       void push(int ele){
           
           if(s.empty()){
               s.push(ele);
               minEle = ele;
           }
           
           else{
               
           
               if(ele <= minEle){
                   
                   int encoded = 2*ele - minEle;
                   s.push(encoded);
                   
                   minEle  = ele;
                   
                   
               }
               
               else{
                   s.push(ele);
               }
               
           
           }
           
           
           
           
           
       }