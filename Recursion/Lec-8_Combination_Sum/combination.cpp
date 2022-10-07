#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &vec){
    
    for(int i=0;i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;

};



void combinationSum(int index , int csum , int target , vector<int> &vec , int n , int arr[]){


    
    if(index >= n  || target < 0){
        return;
    }

    if(target == 0){
        display(vec);
        return;
    }

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

    int arr[] = {2,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    int target  = 7;



    vector<int> vec;


    combinationSum(0 ,  0 , target , vec , n , arr);


    return 0;
}