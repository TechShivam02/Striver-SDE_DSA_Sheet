#include<bits/stdc++.h>
using namespace std;



void display(vector<int> &vec){
    
    for(int i=0;i<vec.size() ; i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;

}


/*

void subsetSum(int index , vector<int> &vec , int arr[] , int n , int sum){

    if(index >= n ){
        vec.push_back(sum);
        return;

    }


    sum += arr[index];
    subsetSum(index+1 , vec , arr , n , sum);

    sum  -= arr[index];
    subsetSum(index+1 , vec , arr , n , sum);

}

*/



void subsetSum(int index , vector<int> &vec , int arr[] , int n , int sum){

    if(index >= n ){
        vec.push_back(sum);
        return;

    }

    subsetSum(index+1 , vec , arr , n , sum + arr[index]);  // for left , sum = sum+arr[index] pass

    subsetSum(index+1 , vec , arr , n , sum);  // for right no change in sum

}



int main(){

    int arr[] = {3,1,2};  // 0 1 2 3 3 4 5 6

    // int arr[] = {2,3};  // 0 2 3 5
    // int arr[] = {5,2,1};  // 0 1 2 3 5 6 7 8
    
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    vector<int> vec;


    subsetSum(0 , vec , arr , n , sum);

    sort(vec.begin() , vec.end());

    display(vec);




    // Time Comp : O( 2^n + 2^n * Log(2^n) );  // for each pos - Pick/NonPick  = 2^n  + sort vector -> (n*logn)


    return 0;
}