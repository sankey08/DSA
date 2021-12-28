#include<iostream>
using namespace std;
#include "Node.cpp"

Node* reversaLL (Node *head){
        //check base
        if(head==NULL || head->next == NULL){
            return head;
        }

        Node *smallAns = reversaLL (head->next);

        Node *temp = smallAns;
        while (temp->next!=NULL)
        {
            /* code */
            temp=temp->next;
        }
        temp->next = head;
        head->next = NULL;

        return smallAns;
}

//O(n)
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


// Node* takeInput(){
//      int data ;
//      cin >> data;
//      Node *head = NULL;

//      while (data != -1)
//      {
//          Node *newNode = new Node(data);
//          if(head == NULL){
//          head = newNode;
//          }
//          else{
//              Node *temp = head;
//              while(temp->next != NULL){
//                  temp = temp->next;
//              }
//              temp->next = newNode;
//          }
//         cin >> data;
//      }
//      return head;
// }

void print(Node *head){

   // Node *temp = head;  //For not losing head

    //Full traversal till end
    // while(temp != NULL){
    //     cout << temp->data;
    //     temp = temp->next; 
    // }

    while(head != NULL){
        cout << head->data << "\t";
        head = head->next; 
    }
    cout<< endl;
}

Node* insertNode(Node *head,int i,int data){
    
    Node *newNode =new Node(data);
    Node *temp =head;
    int count = 0;

    if(i == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }

    while (temp!=NULL && count < i-1)     // i - 1 node address
    {
        /* code */  
        temp = temp->next;
        count++;
    }
    //One way
    if(temp!=NULL){
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
    }
    //Another way
    // newNode->next = temp->next;
    // temp->next = newNode;
    return head;
}

//Mid element
void midElement(Node *head){
    Node* slow = head;
    Node* fast = head;
    if(head != NULL){
        while (fast!=NULL && fast->next!=NULL)
        {
            /* code */
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << " Middle element is " << slow->data;
    }
}

int main(){

    Node *head = takeInputBetter();
    //print(head);

//     int i,data;
//     cin>> i >> data;
//   //head = insertNode(head,i,data);
//   //print(head);

    midElement(head);
    
    //Statically
    // Node n1(1);
    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // print(head);
    //print(head);    //will print
    /*
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;
    cout << head->next->data;

    //Dynamically
    Node *n3 = new Node(10);
    Node *head1 = n3;
    Node *n4 = new Node(20);

    n3->next = n4;
    cout<< n3 << " " << n4;
    */

    return 0;

}