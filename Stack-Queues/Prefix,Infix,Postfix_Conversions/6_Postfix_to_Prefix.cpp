#include<bits/stdc++.h>
using namespace std;


string Postfix_to_Prefix(string str) {
    
        
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

                string ans  =  str[i] + first + second ;   // Operator + first  + Second

                stk.push(ans);

               
            
            }   
            
            
        }
        




        return stk.top();
        
        



    }





int main(){


    string str = "ABC/-AK/L-*";

    cout<<Postfix_to_Prefix(str)<<endl;  

}