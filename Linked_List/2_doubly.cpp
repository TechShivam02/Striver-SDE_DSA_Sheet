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

            
        
    void insertBegin(struct node* &head , int newData){   //  1 2 3
        
            struct node* temp = new node(newData);  // 100
            
            temp ->next = head;
            head ->prev = temp;
            
              
            head = temp;     // 100 1 2 3 

          
              
              
                
        }
            
            
        void insertEnd(struct node* &tail , int newData){
        
               
               
                
              struct node* temp = new node(newData);
              tail->next = temp;
              temp ->prev = tail;
              
              tail = tail->next;


              
            }
            
            
void insertAtPosition(struct node* &head , int pos , int data){
                 
                 struct node* temp = head;
                 

    if(pos >=2 ){


                int count = 2;
                 
                while(count < pos){
                    temp = temp->next;
                    count++;
                }
                    
              struct node* NewTemp = new node(data);
              NewTemp->next = temp->next;
              temp->next->prev = NewTemp;


              temp->next = NewTemp;
              NewTemp->prev = temp;
              
        }

        else{
                    
              struct node* NewTemp = new node(data);
              
              NewTemp->next = head;
              head->prev = NewTemp;

              head = NewTemp;


        }  
              
                
}
            
            
        
        void display(struct node* head){
        
              while(head != NULL)
                {
                    cout<<head->data << " <-> ";
                    head = head->next;
                }
                
                cout<<endl<<endl;
        
        
            }
            
            
            
    void insertAtMiddle(struct node* head , int NewData){
                 
                 struct node* ptr = head;
                 
                 int count=0;
                 
                 while(ptr != NULL){
                     count++;
                     ptr = ptr->next;
                 }
                 
                 
                 int middle = count/2;
                 

                 cout<<"Middle : "<< middle<<endl<<endl;

                 insertAtPosition(head , middle+1 , NewData);
                
                // cout<<"Middle : "<<count<<endl;
                
            }
      
      
            
    void deleteFront(struct node* &head){
        
        struct node* temp = head;
        
        head = head->next;
        head->prev = NULL;

        
        delete(temp);


        
    }
        
          
void deleteEnd(struct node* &tail){
        
        struct node* temp = tail;
        
        tail = tail->prev;
        tail->next = NULL;


    delete (temp);

        
        
    }
        
        
        
    void deleteAtPos(struct node* head , int pos ){
        
        struct node* temp = head;
        
         int count = 2;
                 
                while(count < pos){
                    temp = temp->next;
                    count++;
                }
        
        temp->next = temp->next->next;
        
        
    }
        
        
        
        
     void search(struct node* head , int ele){
         

          
        struct node* temp = head;


            int i=1;
            
            bool flag = false;
            
            while(temp != NULL){
                
                if(temp -> data == ele)
                {
                    cout<<ele<< " , Found  At : "<<i<< " Position ."<<endl;
                    flag = true;
                    break;
                }
                
                temp = temp->next;
                i++;
                
            }


            
            
            if(!flag){
                 cout<<ele<< " , Not Found"<<endl;
            }
     }
        
        
        
        
int main(){
        
        
        
            head = new node(1);
            tail = head;
            
        
        
            struct node* temp2 = new node(2);
            
            head->next = temp2;
            temp2->prev = head;
            
            tail = tail->next;
            
            
            
            
            
        
        
            struct node* temp3 = new node(3);
            
            temp2->next = temp3;
            temp3->prev = temp2;
        
        
            tail = tail->next;
            
        
        
            display(head);
            
            
            //  1 --> 2  --> 3  
            
            
    insertBegin(head , 100);
        
        
            display(head);   // 100 1 2 3 
        
            
    insertEnd(tail , 1000);

            display(head);
            

    insertAtPosition(head , 1 , 99);
        
        display(head);
        
        

    insertAtMiddle(head , 500);
        
         display(head);
         
         

         
    deleteFront(head);
         
         display(head);
         
         

    deleteEnd(tail);
    
         display(head);
         
         
            
        // deleteAtPos(head , 2);
        //      display(head);
    
         
    int ele = 520;
    
    search(head , ele);
    
         
         
         
        
    
        
        
    }
