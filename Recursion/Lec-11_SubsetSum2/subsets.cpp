#include<bits/stdc++.h>
using namespace std;


void display(vector<int> &vec){

    for(int i=0;i<vec.size() ; i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;
    
}
void subsets(int index  , int arr[] , int n , vector<int> &vec){

    if(index > n){
        return;
    }


    for(int i=index ; i<n;i++){

            if( i!= index &&  arr[i] == arr[i-1]){
                continue;
            }

            vec.push_back(arr[i]);
            display(vec);

        subsets(i+1 , arr, n , vec );

            vec.pop_back();

        }



}

    
int main(){



    int arr[] = {1,2,2};

    int n=sizeof(arr)/sizeof(arr[0]);

    // Step 1 : Sort the array

    sort(arr , arr+n);

    // Step 2 : find subSets 

    vector<int> vec;
    subsets(0 , arr , n , vec);

    return 0;
}


// Time Comp : 2^n * n;  // 2^n for  subset   // n = Copying into in vector
// Space Comp : O(2^n * K)








/*              // LeetCode ...  Soln



void AnsAdd(vector<int> &vec , vector< vector<int> > &ans){
    ans.push_back(vec);    
}
 
    
    
void subsets(int index  , vector<int> &arr , int n , vector<int> &vec ,  vector< vector<int> > &ans ){

    
    if(index > n){
        return;
    }


    for(int i=index ; i<n;i++){

            if( i> index &&  arr[i] == arr[i-1]){
                continue;
            }

            vec.push_back(arr[i]);

            AnsAdd(vec , ans);

         subsets(i+1 , arr, n , vec , ans );

            vec.pop_back();

        }
    
    


}
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        
        vector< vector<int> > ans;
        int n=arr.size();
        
        
        // Step1 : Sort the vector
        sort(arr.begin() , arr.end());
        
        // Step2 : find the subsets ..
        vector<int> vec;
        
        
        subsets(0 , arr , n , vec , ans);
        ans.push_back({});
        
        return ans;
        
    }
    
    
};


*/