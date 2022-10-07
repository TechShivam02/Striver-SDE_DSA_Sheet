#include<iostream>
using namespace std;



void Paramt(int i, int sum){

    if(i<1){
        cout<<"Sum : "<<sum<<endl;
        return;
    }

    Paramt(i-1 , sum+i);
}   



int func(int n){

    if(n<=0){
        return 0;
    }

   return n + func(n-1);
   
}   



int Factorial(int n){

    if(n<=1){
        return 1;
    }

   return n * Factorial(n-1);
   
}   






int main(){


/*
//  1 Parametrized 
    int n=3;
    Paramt(n,0);
*/


/*
//  2 Functional 
    int n=3;
    cout<<"Sum : "<<func(n)<<endl;
*/

    int n=3;
    cout<<"Fact : "<<Factorial(n);


    // Time Comp : O(n);
    // Space Comp : O(n);
    


    return 0;
}