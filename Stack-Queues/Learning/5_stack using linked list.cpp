void MyStack ::push(int ele) 
{
    
     StackNode *newNode = new StackNode(ele);
     
     newNode->next = top;
     top = newNode;
     
    
}



//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == NULL){
        return -1;
    }
    
    int ele = top->data;
    
    StackNode *ptr = top;
    
    top= top->next;
    delete(ptr);
    
    return ele;
    
    
}