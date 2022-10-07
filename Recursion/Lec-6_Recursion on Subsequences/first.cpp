#include<iostream>
#include<vector>

using namespace  std;



void display(vector<int> &vec){
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<< " ";
    }

    cout<<endl;

}


void  printSubSequences(int i , int arr[] , int n , vector<int> &ans){

    if(i>=n){
        display(ans);
        return;
    }

    ans.push_back(arr[i]);
    printSubSequences(i+1 , arr , n , ans);

    ans.pop_back();
    printSubSequences(i+1 , arr , n , ans);

}


int main(){


    int arr[] = {3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);


    vector<int> ans;

    printSubSequences(0 , arr , n , ans);    

    // No of subsequences :  2^n;

    // Time Comp : 2^n * n ( n : display each vector subseq)



    return 0;
}