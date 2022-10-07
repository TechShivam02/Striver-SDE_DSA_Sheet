class Solution {
public:
    
    
    bool Safe(int row , int col  , vector<string> &board , int n){
        
        
        // checking left row 
        int currRow = row;
        int currCol = col;
        
        while(currCol >=0 ){
            if( board[currRow][currCol] == 'Q'){
                return false;
            }
            
            currCol--;
        }
        
        
         // checking upper left Diagonal 
        currRow = row;
        currCol = col;
        
        while(currRow >=0 && currCol >=0 ){
            
            if( board[currRow][currCol] == 'Q'){
                return false;
            }
            
            currRow--;
            currCol--;
            
        }
        
        
        
         // checking lower left Diagonal 
        
        currRow = row;
        currCol = col;
        
        while(currRow < n && currCol >=0 ){
            
            if( board[currRow][currCol] == 'Q'){
                return false;
            }
            
            currRow++;
            currCol--;
            
        }
        
        
        return true;
        
        
        
        
    }

    
 void solve( int col  , vector<string> &board ,  vector< vector<string> > &ans , int n){
     
    if(col == n){
        ans.push_back(board);
        return;
    }
     
     for(int row=0 ; row<n ; row++){
        
         if( Safe(row , col   , board , n)){
             
             board[row][col] = 'Q';
             
             solve(col+1 , board , ans , n);
             
             board[row][col] = '.';
             
         }
         
     }
     
     
     
 }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        
        vector< vector<string> > ans;
        
        vector<string> board(n);
        
        
        string str(n , '.');
        
        for(int i=0;i<n;i++){
            board[i] = str;
        }
        
        
        solve(0 , board , ans , n);
        
        return ans;
        
            
        
        
    }
};