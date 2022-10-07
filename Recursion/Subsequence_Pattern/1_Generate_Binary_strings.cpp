#include<iostream>
using namespace std;



void display(string str ){
    for(int i=0;i<str.length() ; i++){
        cout<<str[i];
    }

    cout<<endl;

}


void printALL_BinaryString(int i , int targetLen , int n , string str ){
    
    if(i==n){
        display(str);
        return;
    }

   
    printALL_BinaryString(i+1 , targetLen-1 , n , str+'0' );

    if (i>=0 && str[i-1] == '1' && str[i-2] == 1) {
        return;
    }

    else{
        printALL_BinaryString(i+1 , targetLen-1 , n , str +'1' );
    }


     
   

}


int main()
{

    int k=3;
    printALL_BinaryString(0 , 3 , 3 , "");


}