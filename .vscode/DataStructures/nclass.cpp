#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void Traverse(Node* head){
	Node* n;
	n=head;
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
Node* insertbeg(Node* firstnode,int data){
	Node* newhead=new Node();
	newhead->data=data;
	newhead->next=firstnode;
	return newhead;
}
Node* insertatend(Node* head,int data){
	Node* newnode=new Node();
	Node* p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	newnode->data=data;
	p->next=newnode;
	newnode->next=NULL;
	return head;
	
}
Node* search(Node* head,int item){
	Node* n;
	n=head;
	while(n!=NULL){
	if(n->data==item)
		return n;
		else  
		n=n->next;
	}
	if(n==NULL)
	return NULL;
	
}
void Average(Node* head){
	Node* n;
	n=head;
	int c=0,x=0;
	while(n!=NULL){
		x+=n->data;
		n=n->next;
		c++;
	}
	cout<<"\n"<<x/c;
}
Node* insertbefore(Node* head,int data,int index){
	Node* temp=new Node();
	if(index==0){
		temp->next=head;
		temp->data=data;
		return temp;
	}
	
	Node* ptr=head;
	int count=0;
	while(count<(index-1)&&ptr->next!=NULL){// 0  1   2  3 
                                            // 11 22 44 55
		ptr=ptr->next;
		count++;
	}
	if(ptr->next==NULL&&index>(count+1)){
		cout<<"Index not exist";
		exit(0);
	}
	temp->next=ptr->next;
	temp->data=data;
	ptr->next=temp;
	return head;
}
int main(){
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	Traverse(head);
//	head=insertbeg(head,7);
//	cout<<endl;
//	
//	Traverse(head);
//	Node* index=search(head,4);
//	cout<<"\n"<<index;
//	Average(head);
cout<<"\n";
    head=insertbefore(head,90,0);
    Traverse(head);
}