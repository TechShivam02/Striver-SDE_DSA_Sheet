
#include<bits/stdc++.h>

using namespace std;


void display(vector<int> &vec){
    
    for(int i=0;i<vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}



void combinationSum2(int index , int target , vector<int> &vec , int arr[] , int n){

    if(index >= n || target <0) {
        return;
    }

    if(target ==0){
        display(vec);
        return;
    }


    for(int i=index ; i<n;i++){


            if( i != index &&  arr[i] == arr[i-1]){ // check  curr ele alredy taken by previous POSition
                continue;
            }


                if(arr[i] > target){   // optimizing ...
                    return;
                }



            target = target-arr[i];
            vec.push_back(arr[i]);

        combinationSum2(i+1 , target, vec , arr , n);

            target = target+arr[i];
            vec.pop_back();


        }

    
}



int main(){

    int arr[] = {1,1,1,2,2};
    int target = 4;

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> vec;


    sort(arr,arr+n); // Step 1
    combinationSum2(0,target , vec , arr , n);  // Step 2



    // Time comp : 2^n * K;
    // Space comp : K * X;





    return 0;
}