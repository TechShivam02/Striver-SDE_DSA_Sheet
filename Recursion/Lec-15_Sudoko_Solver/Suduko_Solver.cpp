class Solution {
public:

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);        
    }

    bool solve(vector< vector<char> > &board){

            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[i].size();j++){
                    
                    if(board[i][j] == '.'){
                        
                        char ch;
                        for(ch='1' ; ch<='9'; ch++){
                            
                            if( isValid(i , j , ch , board) ){

                                    board[i][j] = ch;
                                    bool ans = solve(board);

                                    if(ans){
                                        return true;
                                    }
                                    
                                    else{
                    
                                        board[i][j] = '.'; 
                                    }

                               }   // is valid

                        }

                        if(ch >9){
                            return false;
                        }


                    }   // if cell is empty 

                }
            }        

            return true;
            
    }

    bool isValid(int row , int col , char ch , vector<vector<char>>& board){

            for(int i=0; i<9;i++){
                if(board[row][i] == ch || board[i][col] == ch){
                    return false;
                }
            }

            int st = 3*(row/3);
            int end = 3*(col/3);

            for(int i=st;i<st+3;i++){
                for(int j=end;j<end+3;j++){
                    if(board[i][j] == ch){
                        return false;
                    }
                }
            }
            

            return true;

    }

};