
class Queue {
    stack<int> st1;
    stack<int> st2;
    
    
public:

    void enqueue(int ele) {
        
        
        st1.push(ele);
        
        
    }
    
    

int dequeue() {
        
        if(st1.empty() && st2.empty()){
            return -1;
        }
        
        
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        
        int ans=st2.top();
        st2.pop();
        
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        
        
        return ans;
        
        
        
    }
    
};