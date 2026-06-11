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
            if(temp==NULL){
                cout<<"Invaid pos\n";
                return;
            }
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
    void insert(int val,int pos){
        if(pos<0){
            cout<<"Invalid pos\n";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        
        Node*temp = head;
        for(int i = 0;i<pos-1;i++){
            temp = temp->next;
        }
        
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    
    //search in ll
    int search(int key){
        Node* temp = head;
        int idx = 0;
        
        while(temp!=NULL){
            if(temp->next==key){
                return idx;
            }
        }
        
        temp = temp->next;
        idx++;
    }
    return -1;
    
};

int main() {
	// your code goes here
	List ll;
	ll.push_front(10);
	ll.push_front(20);
	ll.push_front(30);
	
	ll.insert(4,2);
	
	ll.search(2);
	ll.push_back(40);
	ll.pop_front();
	ll.printll();
	return 0;
	

}

