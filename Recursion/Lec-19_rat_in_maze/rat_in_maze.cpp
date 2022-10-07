
// code studio

#include <bits/stdc++.h> 

bool isSafe(int newX , int newY , vector<vector<bool> > &visited , vector < vector<int> > &arr , int n){
     
    if( (newX >=0 && newX <n ) && (newY >=0 && newY <n ) &&  visited[newX][newY] == 0 && arr[newX][newY] ==1){
        return true;
    } 
    
    return false;
    
}
void solve(int x , int y , vector < vector<int> > &arr , int n , vector<string> &ans , vector< vector<bool> > &visited , string path){
    
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    
    //     Down   Left Right   UP
    
    // Down
    if( isSafe(x+1 , y , visited , arr , n) ){
        
        visited[x][y] = 1;
        
        solve(x+1 , y , arr , n , ans , visited, path+'D' );
        
        visited[x][y] = 0;
        
    }
    
    
    // Left
    if( isSafe(x , y-1 , visited , arr , n) ){
        
        visited[x][y] = 1;
        
        solve(x , y-1 , arr , n , ans , visited, path+'L' );
        
        visited[x][y] = 0;
        
    }
    
    
    // Right
    if( isSafe(x , y+1 , visited , arr , n) ){
        
        visited[x][y] = 1;
        
        solve(x , y+1 , arr , n , ans , visited, path +'R');
        
        visited[x][y] = 0;
        
    }
    
    
    
    // Up
    if( isSafe(x-1 , y , visited , arr , n) ){
        
        visited[x][y] = 1;
        
        solve(x-1 , y , arr , n , ans , visited, path+'U' );
        
        visited[x][y] = 0;
        
    }
    
    
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    
    
    vector<string> ans;
    
    
    if(arr[0][0] == 0){
        return ans;
        
    }
    
    vector<vector<bool> > visited(n ,  vector<bool> (n,0));  //  vector<bool> (n,0)   intilaize with size n , with all values 0 ,  similarly for 2d vector
    
    string path="";
    
    solve(0,0, arr , n , ans , visited , path);
    
    return ans;
    
       
}