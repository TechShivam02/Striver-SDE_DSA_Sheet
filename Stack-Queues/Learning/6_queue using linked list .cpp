void MyQueue:: push(int ele)
{
    if(front == NULL){
        QueueNode *newNode = new QueueNode(ele);
        
        front = newNode;
        rear = newNode;
        
    }
    
    else{
        
        QueueNode *newNode = new QueueNode(ele);
        rear -> next = newNode;
        rear = rear->next;
    }
    
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if(front == NULL){
        
        return -1;
    }
    
    int ele = front->data;
    front = front->next;
    
    return ele;
    
}