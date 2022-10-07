
    
    bool isSafe(int clr , int node , bool graph[101][101] , int color[] , int m ,int n){
    
        for(int i=0;i<n;i++){
            if(graph[node][i] ==1 && color[i] == clr){  // it means , finding adjacent  if adjacent then cheking color on adjacent is color of adjacent is Same that is for doing the color on curr node , if yes return false(then not safe)
                return false;
            }
        }    
        
        
        return true;
    }
    
    
    bool solve( int node , bool graph[101][101] ,  int color[] , int m , int n){
        
        if(node == n){
            return true;
        }
        
        int i;
        
        for(i=1;i<=m;i++){
            
                if(isSafe(i , node , graph , color , m ,n) == true){
                
                    color[node] = i;
                    
                    if(solve(node+1 , graph , color , m ,n) == true){
                        return true;
                    }
                    
                    else{
                        color[node] = 0;
                    }
                
                }
            
        }
        
        if(i==m+1){
            return false;
        }
        
        return true;
        
        
    }
    
    
    
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        
        int color[n] = {0};
        
        if(solve(0 , graph ,  color , m , n ) == true){
            return true;
        }
        
        return false;
    }


// Time Comp: N Raise to power m  (n= no of nodes , m = no of colors);
// Space comp : O(n)

