#include<bits/stdc++.h>
using namespace std;


string Postfix_to_Infix(string str) {
    
        
        stack<string> stk;
        string ans="";
        
        
        for(int i=0;i<str.length() ; i++){
            
            
            if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' ) ) {

                string s="";
                s+=str[i];

                stk.push(s);
            }


            
            
            else{

                string first,second;


                if(!stk.empty() ){
                    second = stk.top();
                    stk.pop();
                }  

                if(!stk.empty() ){
                    first = stk.top();
                    stk.pop();
                }  

                string ans  = "(" + first + str[i] + second + ")";     // first  operator second 

                stk.push(ans);

               
            
            }   
            
            
        }
        




        return stk.top();
        
        



    }





int main(){


    string str = "AB-DE+F*/";

    cout<<Postfix_to_Infix(str)<<endl;  

}