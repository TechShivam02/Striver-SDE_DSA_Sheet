void solve(int curr , vector<int> &vec , int k , string &str , int n , int fact){
        
        if(str.size() == n){
            return;
        }
        
        
        fact = fact/curr;
        
        int start = k/fact;
        
        str =  str +  to_string( vec[start] );
    
        vec.erase(vec.begin() + start);
        
        k=k%fact;
                  
 
        curr--;
        
    solve(curr , vec , k , str , n , fact);     
        
        
}
    
    
        
    string getPermutation(int n, int k) {
        
        
        vector<int> vec;
        
        int fact = 1;
        
        
        for(int i=1;i<=n;i++){
            vec.push_back(i);
            fact = fact*i;
            
        }
        
        
        
        
        string str = "";
        
        solve(n,vec , k-1 , str ,  n , fact);
        
        
        return str;
        
        
    }