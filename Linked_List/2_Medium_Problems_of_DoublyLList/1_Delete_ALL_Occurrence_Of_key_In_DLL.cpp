#include<iostream>
using namespace std;
        
        
struct node{
        
    int data;
    
    struct node* next;
    struct node* prev;
    
    node(int newData){
                
        this->data = newData;
        
        this->prev = NULL;
        this->next = NULL;
         
    }
        
};
        
        
        
struct node* head;
struct node* tail;

          
        
            
    void insertEnd(struct node* &tail , int newData){
        
               
               
                
              struct node* temp = new node(newData);
              tail->next = temp;
              temp ->prev = tail;
              
              tail = tail->next;

    }
            
            
        
    void display(struct node* head){
        
              while(head != NULL)
                {
                    cout<<head->data << " <-> ";
                    head = head->next;
                }
                
                cout<<endl<<endl;
        
        
    }
            
            


    void  removeAllOcuurence(struct node* head,struct node* tail , int key) {
            
            if(head == NULL || head->next == NULL)
            {
                return;
            }

            node* temp = head;

            while (temp)
            {
                if(head->data == key && head!=NULL){
                    
                    node* ptr = head;

                    head=head->next;
                    temp=  head;

                    delete ptr;

                }

                else if(temp->next && temp->next->data == key){
                    
                    node* ptr = temp->next;
                    temp->next = temp->next->next;

                    delete ptr;

                }


                else{
                    temp = temp->next;
                }


            }



            display(head);
            

    }
        
        


int main(){


            head = new node(2);
            tail = head;
            
            
            
            insertEnd(tail , 2);
            
            insertEnd(tail , 2);
            
            insertEnd(tail , 10);

            insertEnd(tail , 8);
            insertEnd(tail , 4);

            insertEnd(tail , 2);
            insertEnd(tail , 5);
            insertEnd(tail , 2);
            
            
            display(head);

            int key = 2;

            removeAllOcuurence(head,tail , key);

            

        
}


