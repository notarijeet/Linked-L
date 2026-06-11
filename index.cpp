#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    
    public:
    List(){
        head = tail = NULL;
    }
    
    //adding value in front;
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    
    //adding value in back;
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }
        
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    //removing element from front
    void pop_front(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        
        delete temp;
    }
    
    //removing element from last;
    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty\n";
            return;
        }
        
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    
    void printll(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
    
    //inserting element in the middle
    
};

int main() {
	// your code goes here
	List ll;
	ll.push_front(10);
	ll.push_front(20);
	ll.push_front(30);
	
	ll.push_back(40);
	ll.pop_front();
	ll.printll();
	return 0;
	

}
