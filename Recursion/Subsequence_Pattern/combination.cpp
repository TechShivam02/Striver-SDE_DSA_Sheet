#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i=0; i<vec.size();i++){
        cout<<vec[i]<<" ";    
    }

    cout<<endl;

}

void combinationSum(int index , int csum , int target , vector<int> vec , int n , int arr[]){


    if(target <0  || index >= n){
        return;
    }


    if(target ==0 ){
        display(vec);
        return;
    }




    // vec.push_back(arr[index]);
   

    // combinationSum(index , currSum+arr[index], targetSum-arr[index], vec , n , arr);



    // vec.pop_back();

    // combinationSum(index+1 , currSum , targetSum , vec , n , arr);


    csum += arr[index];
    target -= arr[index];
    vec.push_back(arr[index]);

    combinationSum(index , csum , target , vec , n , arr);  // include


    csum -= arr[index];
    target += arr[index];
    vec.pop_back();

    combinationSum(index+1, csum , target , vec , n , arr);  // Not include


}

int main(){


    
    



    int arr[] = {7,2,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr , arr+n);


    int targetSum = 16;


    int currSum=0;
    vector<int> vec;

    combinationSum(0 , currSum , targetSum  ,vec ,n , arr);



    

}