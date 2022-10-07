#include<iostream>
using namespace std;


void first(string name , int n , int i){

    if(i==n){
        return;
    }


    cout<<name<<endl;

    i++;
    first(name , n , i);

}




void second(int i , int n){

    if(i>n){
        return;
    }

    cout<<i<<" ";

    i++;
    second(i, n);

}



void Third(int i , int n){

    if(i<1)
    {
        return;
    }

    cout<<i<<" ";
    Third(i-1,n);

}



void Fourth(int i , int n){

    if(i<1)
    {
        return;
    }

    Fourth(i-1,n);

    cout<<i<<" ";

}


void fifth(int i , int n){ 

    if(i>n){
        return;
    }

    fifth(i+1 , n);

    cout<<i<< " ";

}
    


int main(){

    /*
   
    1) Print Name N times , using recursion;
    2) Print linearly from 1 to N;
    3) print from n to 1
    4) print linearly from 1 to n (backtracking)
    5) print from n to 1 , backtraking
    
    */


/*
   // 1   print name n times , using recursion ..

   string name = "shivam";
   int n=5;

   int i=0;

   first(name , n , i);
*/



/*
// 2) Print linearly from 1 to N;
    int i=1;
    int n=5;

    second(i,n);
*/




/*
//  3) print from n to 1


    int n=5;
    Third(n,n);
*/


/*
//  4) print linearly from 1 to n (backtracking)

    int n=5;
    Fourth(n,n);
*/




//  5) print from n to 1 , backtraking

    int n=5;
    fifth(1,n);





 
    return 0;
}