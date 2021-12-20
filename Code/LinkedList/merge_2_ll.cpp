#include<iostream>
using namespace std;
#include "Node.cpp"

Node* takeInputBetter(){
     int data ;
     cin >> data;
     Node *head = NULL;
     Node *tail = NULL; 
     while (data != -1)
     {
         Node *newNode = new Node(data);
         if(head == NULL){
         head = newNode;
         tail = newNode;
         }
         else{
             tail->next = newNode;      //Links to prev node to new node
             tail = tail -> next;       //Increment the tail address to newnode       
         }
        cin >> data;
     }
     return head;
}

void display(Node *head){

    while(head != NULL){
        cout << head->data << "\t";
        head = head->next; 
    }
    cout<< endl;       

}

// Remaining 
void mergeLinkedList(Node *head1,Node* head2){

    Node *temp1 = head1;
    Node *temp2 = head2;

    Node *fh=NULL,*ft=NULL;
    cout << ft << endl;
    while (temp1!=NULL || temp2!=NULL)
    {
        /* code */
        cout << "while mdhe" << endl;
        if(temp1->data < temp2->data){
           fh->next = temp1;
           ft->next = temp1; 
           temp1 = temp1->next;
           cout<< " step 1" << endl;
        }
        else{
            ft->next = temp2; 
            ft = temp2; 
            temp2 = temp2->next;
        }
    }
    
    if(temp1 == NULL){
        ft->next = temp2; 
    }
    else{
        ft->next = temp1; 
    }

    cout<<fh->data;
}

int main(){

     Node *head1 = takeInputBetter();
     cout << "2 nd" << endl; 
     Node *head2 = takeInputBetter();

     mergeLinkedList(head1,head2);
     

     return 0;
}