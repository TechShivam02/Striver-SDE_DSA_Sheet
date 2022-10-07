#include<iostream>
using namespace std;


bool isPalindrome(string str , int i , int n){

    if(i >= n/2){
        return true;
    }

    if(str[i] != str[n-i-1]){
        return false;
    }

    return isPalindrome(str , i+1 , n);


}


int main(){


    string str = "MADAM";

    int n=str.length();
    cout<<isPalindrome(str , 0 , n);

    return 0;
}