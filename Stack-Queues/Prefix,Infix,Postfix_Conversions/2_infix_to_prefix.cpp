#include<bits/stdc++.h>
using namespace std;


int Precedence(char ch){
        
        if(ch == '^'){
            return 3;
        }
        
        else if(ch == '*' || ch == '/'){
            return 2;
        }
        
        else if(ch == '+' || ch == '-'){
            return 1;
        }
        
        return 0;
}





string infixToPostfix(string str) {
    
        
        stack<char> stk;
        string ans="";
        
        
        for(int i=0;i<str.length() ; i++){
            
           
            
            if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' ) ) {
            
                ans += str[i];
                
            }
            
            
            else{
                
                // it is a operator 
                // it is ( or )
                
                if(str[i] == '('){       // it is ( or )
                    stk.push(str[i]);
                }
                
                
                else if(str[i] == ')'){   // it is ( or )
                    
                    while(!stk.empty() && stk.top() != '('){
                        
                        char ch = stk.top();
                        
                        ans += ch;
                        stk.pop();
                    }
                    
                    if(!stk.empty() && stk.top() == '('){
                            stk.pop();       
                    }
                 
                    
                }
                
        
                else{    // it is a operator 
                    
                    if(stk.empty())
                    {
                        stk.push(str[i]);
                    }
                    
                    
                    else{
                        
                        while( !stk.empty() &&  Precedence(stk.top()) >= Precedence(str[i]) ){
                            
                            char ch = stk.top();
                            stk.pop();
                            
                            ans += ch;
                            
                        }
                        
                        stk.push(str[i]);
                        
                    }
                    
                }
                
                
                
            }
            
            
        }   
        
        
        
        while(!stk.empty()){
            
            char ch = stk.top();
            stk.pop();
            
            ans += ch;
        }

        return ans;

}







void reverse(string &str){

    string ans="";

    for(int i=str.length()-1;i>=0;i--){
        if(str[i] == '('){
            str[i] = ')';
        }

        else if(str[i] == ')'){
            str[i] = '(';
        }

        
        ans += str[i];
    }

    str = ans;


}

string Infix_To_Prefix(string str){

    reverse(str);

    string ans = infixToPostfix(str);

    reverse(ans);

    return ans;

}


int main(){


    string str = "(A+B)*C-D+F";


    cout<<Infix_To_Prefix(str)<<endl;   // logic :  1)reverse the string  2) infix to postfix  3) reverse 
    


}