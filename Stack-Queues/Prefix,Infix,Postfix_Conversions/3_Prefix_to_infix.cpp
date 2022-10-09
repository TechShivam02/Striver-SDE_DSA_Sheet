#include<bits/stdc++.h>
using namespace std;


string Prefix_to_Infix(string str) {
    
        
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

                string ans  =  "(" + second  + str[i] + first + ")";     // second Operator first

                stk.push(ans);

               
            
            }   
            
            
        }
        
        return stk.top();
    
}






void reverse(string &str){

   int l=0;
   int r=str.length()-1;

   while(l<r){

        if(str[l] != str[r]){
            swap(str[l] , str[r]);

        }
        l++;
        r--;
   }





}


string solve(string str){

    reverse(str);

    string ans = Prefix_to_Infix(str);

    return ans;

}


int main(){


    string str = "*+A/BC-/ADL";

    cout<<solve(str)<<endl;  



    /*

        1) Reverse
        2) Solve ( Second Operator First)   // second = top ele of stack  , first = below of first ele

    */

}