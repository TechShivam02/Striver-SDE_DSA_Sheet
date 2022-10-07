
bool isPalindrome(string s, int low , int high){
        while(low <= high){
            if(s[low++] != s[high--])
                return false;
          
        }
        return true;
    }

    
    

void  func(int index , string str , vector<string> &vec , vector< vector<string> > &ans){

    if(index == str.length()){
        ans.push_back(vec);
        return;
    }
    

    for(int i=index;i<str.size();i++){

        if(isPalindrome(str , index , i) == true){

            vec.push_back(str.substr(index , i-index+1)); 
            
            func(i+1 , str , vec , ans);

            vec.pop_back();
        }

    }
}


    
    //  int main() here below ---->

vector<vector<string>> partition(string s) {
        
        vector< vector<string> > ans;
        vector<string> vec;

        func(0 , s , vec , ans);

        return ans;
        
    }

