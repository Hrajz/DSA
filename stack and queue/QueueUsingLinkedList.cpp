#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node* createNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}

//complete the functions

class Queue{
	Node *head;
	Node *tail;
	int s;

	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		
		s=0;
		Node *head=NULL;
		Node *tail=NULL;
	}

	//push the value at the back
	void push(int val){
	if(head==NULL){
	     tail->next = NULL;
      tail->data = val;
      head = tail;
	    s++;
	}
	Node *temp=new Node;
      tail->next = temp;
      temp->data = val;
      temp->next = NULL;
      tail = temp;
	s++;
	
	}

	int front(){
	    return head->data;
	}

	void pop(){
	if(head==NULL)return;
	head=head->next;
	s--;
	}

	int size(){
		
		return s;
	}

	bool isEmpty(){
		if(head==NULL)return true;
		return false;
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";

	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";

	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
