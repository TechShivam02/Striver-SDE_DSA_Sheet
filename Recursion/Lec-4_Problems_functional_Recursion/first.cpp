#include<iostream>
using namespace std;


void Reverse(int arr[] , int left , int  right){

    if(left >= right){
        return;
    }

    swap(arr[left] , arr[right]);

    Reverse(arr , left+1 , right-1);

}



void Reverse1(int arr[] , int i , int n ){

    if( i > n/2){
        return;
    }

    swap(arr[i] , arr[n-i-1]);

    Reverse1(arr ,i+1 ,n);

}


void display(int arr[] , int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";

    }

    cout<<endl;

}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);


/*
    // int left=0;
    // int right = n-1;
    // Reverse(arr , left , right);
*/  
    
    Reverse1(arr , 0 , n);

    display(arr ,n );



}