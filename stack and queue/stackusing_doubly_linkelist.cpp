


#include <iostream>
using namespace std;

struct DoublyNode{
	int data;
	DoublyNode *next;
	DoublyNode *prev;
};
 
DoublyNode* createNode(int val){
	DoublyNode *temp = new DoublyNode;
	temp->data = val;
	return temp;
}

//complete the functions
class Stack{
	DoublyNode *tail;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		tail=NULL;
		s=0; 
	}
	
	//push the value at the back
	void push(int val){
		DoublyNode *temp=new DoublyNode;
	if(tail=NULL){
	    temp->data=val;
	    temp->prev=NULL;
	    temp->next=NULL;
	    tail=temp;
	    s++;}
	    else
	    temp->data=val;
	    temp->next=tail;
	    tail->prev=temp;
	    temp->prev=NULL;
	    s++;
	}
	
	int top(){
			return tail->data;
	}
	
	void pop(){
		tail=tail->prev;
	s--;
	}
	
	int size(){
		return s;
	}
	
	bool isEmpty(){
		if(tail==NULL)return 1;
		return 0;
	}
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
