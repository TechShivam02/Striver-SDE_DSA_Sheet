#include<iostream>
#include<vector>

using namespace std;



void display(vector<int> &vec){
    
    for(int i=0;i<vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}


void permutation(  int index ,  int arr[] , vector<int> &vec , bool visited[] , int n){

    if(vec.size() == n){
        display(vec);
        return;
    }


    for(int i=index ;i<n;i++){
        
        if(visited[i] == true){
                continue;
        }   

        visited[i] = true;
        vec.push_back(arr[i]);


        permutation(0 , arr , vec , visited , n);

        visited[i] = false;
        vec.pop_back();
  

   }




}

int main(){


    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vec;
    bool visited[n] = {0};



    permutation(0 , arr , vec , visited , n);



    // Time Comp : O(n! * n)   // n! = for permutations , n => displaying the ans that stored in vector  size = n
    // Space Comp : O(n) + O(n)  // vector ans  + visited
    
    return 0;
}