#include<iostream>
#include<vector>

using namespace  std;


int CountsubSequenceBOOL(int i , int arr[] , int n  , int sum , int k){

    if(sum > k)
    {
        return 0;   // never ans can be found , here Or in their child subTree 
    }


    if(i>=n){
     
            if(sum == k){   // Conditon Satisfied ..
    
                 return 1;
            }
    
            else {    // condition Not satified ...
                return 0;
            }
            
    }


    sum+= arr[i];


    // Pick 
    int left = CountsubSequenceBOOL(i+1 , arr , n , sum , k);  // count all subseq , from left 
    


    sum -= arr[i];


    // Not Pick ..
    int right = CountsubSequenceBOOL(i+1 , arr , n , sum , k);  // count all subseq , from Right 


    return left+right;  // final ans = left ka ans + right ka ans ;
    
    
}



int main(){


    int arr[] = {1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);



    int sum=3;


    int cSum=0;
    int k=3;

 

    cout<<CountsubSequenceBOOL(0 , arr , n  , cSum , k);    


    // Time Comp : O(2^n);

    return 0;
}