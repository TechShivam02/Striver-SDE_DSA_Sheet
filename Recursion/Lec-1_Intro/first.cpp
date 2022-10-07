#include<iostream>
using namespace std;


/*

void print(){    // Infinite loop   // Stack Overflow  
                        // Missing BASE Condition ...
    cout<<1<<endl;

    print();

}

*/


void print(int count){

    if(count == 5){
        return;
    }

    cout<<count<<" ";
    count++;

    print(count);

}



int main(){

    // print();    // Stack OverFlow ...

    int count=0;
    print(count);

    return 0;
}