#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};


class DoublyList{
    Node* head;
    Node* tail;
    
    public:
    DoublyList(){
        head = NULL;
        tail = NULL;
    }
    
    //adding value in front
    void push_front(int val){
        
        Node* newNode = new Node(val);
        
        if(head==NULL){
            head = tail = newNode;
        }
        
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    
    //adding value in end;
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }
        else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    
    //printing element
    void print(){
        Node* temp = head;
        
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        
        cout<<"NULL\n";
    }
    
    //adding element in front
    void pop_front(){
        
        if(head==NULL){
            cout<<"DLL is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        
        if(head!=NULL){
            head->prev = NULL;
        }
        
        temp->next = NULL;
        delete temp;
    }
    
    //removing element from last
    void pop_back(){
        if(head==NULL){
            cout<<"DLL is empty\n";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        
        if(tail!=NULL){
            tail->next = NULL;
        }
        
        temp->prev = NULL;
        delete temp;
    }
};

int main() {
	// your code goes here
	DoublyList dll;
	
	dll.push_front(11);
	dll.push_front(12);
	dll.push_front(13);
	dll.pop_front();
	dll.pop_back();
	dll.push_back(35);
	dll.print();
	
	
	

}
