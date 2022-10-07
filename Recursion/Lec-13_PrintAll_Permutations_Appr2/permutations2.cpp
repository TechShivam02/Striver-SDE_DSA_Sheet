#include<iostream>
#include<vector>

using namespace std;



void display(int arr[] , int n){
    
    for(int i=0;i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


void permutation(  int index ,  int arr[] , int n){

    if(index >= n){
        display(arr , n);
        return;
    }




    for(int i=index ;i<n;i++){

    
          swap(arr[index] , arr[i]);
       permutation(index+1 , arr  , n);

          swap(arr[index], arr[i]);
   }




}

int main(){


    int arr[] = {1,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    permutation(0 , arr   , n);

    
    return 0;
}