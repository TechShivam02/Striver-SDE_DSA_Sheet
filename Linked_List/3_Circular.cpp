#include<iostream>
using namespace std;
        
        
        struct node{
        
            int data;
            struct node* next;
            
            node(int newData){
                
                this->data = newData;
                this->next = NULL;
                
                
            }
        
        };
        

        struct node* head = NULL;
        struct node* tail;

        
        
    void insert(int data){

            struct node* newNode = new node(data);
            
            if(head!= NULL){

                
                tail->next = newNode;
                tail = tail->next;

                tail->next = head;



            }
            else{
                
                head = newNode;
                head ->next = newNode;

                tail = head;


            }
}
            
            
            
            
          
          
        
void display(struct node* head){
        
        struct node* ptr = head;

    do{
        cout<<ptr->data<< "->";

        ptr = ptr->next;
    }
    while(ptr != head);

             
        
}
            
            
int main(){
        
        
        insert(1);
        insert(2);
        insert(3);
        insert(4);
        
           
        display(head);
            
            
         
         
         
        
    
        
        
    }
