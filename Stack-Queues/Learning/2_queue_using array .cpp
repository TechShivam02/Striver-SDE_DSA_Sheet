
//Function to push an element x in a queue.
void MyQueue :: push(int ele)
{
    
    arr[rear] = ele;
    rear++;
    
    
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if(front == rear){
        return -1;
    }
    
    int ele = arr[front];
    front++;
    return ele;
    
   
    
    
    
}