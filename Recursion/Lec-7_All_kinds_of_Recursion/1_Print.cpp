#include<iostream>
#include<vector>

using namespace  std;



void display(vector<int> &vec){
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<< " ";
    }
     
    cout<<endl;

}


void  findsubSequence(int i , int arr[] , int n , vector<int> &ans , int sum , int k){

    if(i>=n){

        if(sum == k){
             display(ans);
        }
        return;
    }

    ans.push_back(arr[i]);
    sum+= arr[i];

    findsubSequence(i+1 , arr , n , ans , sum , k);

    ans.pop_back();
    sum-= arr[i];

    findsubSequence(i+1 , arr , n , ans , sum , k);


}





bool findsubSequenceBOOL(int i , int arr[] , int n , vector<int> &ans , int sum , int k){

    if(i>=n){

        if(sum == k){  // Conditon Satisfied ..
             display(ans);

             return true;
        }

        else {    // condition Not satified ...
            return false;
        }

    }

    ans.push_back(arr[i]);
    sum+= arr[i];


    // Pick 
    if(findsubSequenceBOOL(i+1 , arr , n , ans , sum , k) == true){
        return true;
    }


    ans.pop_back();
    sum-= arr[i];


    // Not Pick ..
    if( findsubSequenceBOOL(i+1 , arr , n , ans , sum , k) == true ){
        return true;
    };


    return false;  // If not found any...


}

int main(){


    int arr[] = {1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);


    vector<int> ans;
    int sum=3;


    int cSum=0;
    int k=3;

    // findsubSequence(0 , arr , n , ans , cSum , k);    

    findsubSequenceBOOL(0 , arr , n , ans , cSum , k);    




    return 0;
}