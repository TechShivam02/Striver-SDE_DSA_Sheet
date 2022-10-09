
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    char giveOppositeBrac(char &ch){
        
        if(ch=='}'){
            return '{';
        }
        
        else if(ch == ')'){
            return '(';
        }
        
        return '[';
        
    }
    
    
    
    bool ispar(string str)
    {
        int n = str.length();
        
        stack<char> stk;
        
        
        
        
        for(int i=0;i<n;i++){
            
            char ch = str[i];
            
            if(ch =='{' || ch =='(' || ch =='['  ){
                stk.push(ch);
                
            }
             
            else{      
            
                
              char opp = giveOppositeBrac(ch);
              
                
                if(stk.empty() == true || stk.top() != opp){
                  return false; 
                }
                
                
                else if(!stk.empty() && stk.top() == opp)
                {
                    stk.pop();
                }
                
                
                
            }
            
            
            
        }
        
        
        
      return stk.empty()==1;
    }

};