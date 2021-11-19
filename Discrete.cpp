#include<iostream>
using namespace std;

struct Node{
	public:
		int data;
		Node* next;
};

Node* head;
Node* head2;

void insertAtHead(int num)
{
	Node* newItem = new Node();
	newItem->data=num;
	newItem->next=head;
	head=newItem;
}

void insertAtNth(int num, int n)
{
	Node* temp1 = new Node();
	if(n==1)
	{
		temp1->data=num;
		temp1->next=head;
		head=temp1;
		return;
	}
	temp1->data = num;
	temp1->next = NULL;
	Node* temp2 = head;
	for(int i=0; i<n-2; i++)
	{
		temp2 = temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}

void insertAtTail(int num)
{
	Node* temp1 = new Node();
	temp1->data=num;
	temp1->next=NULL;
	Node* temp2 = head;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=temp1;
}

void deleteAtbegin()
{
	Node* temp = head;
	head=temp->next;
	delete(temp); 
}

void deleteAtNth(int n)
{
	Node* temp1 = head;
	if(n==1)
	{
		head = temp1->next;
		delete(temp1);
	}
	int i;
	for(i=0; i<n-2; i++)
	{
		temp1=temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
}

Node* deleteAtend()
{
	Node* temp = head;
	if (head == NULL)
        return NULL;
 
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
 
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	delete(temp->next);
	temp->next=NULL;
}

bool search(int key){
    Node* temp=head;
    while (temp!=NULL){
        if(temp->data==key){
        	cout<<"\nPointer value : "<<temp;
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void concatenate(Node *a, Node *b)
{
    if (a->next == NULL)
        a->next = b;
    else
        concatenate(a->next,b);
}

void display(){

    Node* temp=head;
    cout<<"\nLinked List : ";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
	head = NULL;
	head2 = NULL;
	Node* newList = new Node();
	newList->data=1;
	newList->next=head2;
	head2=newList;
	newList = new Node();
	newList->data=5;
	newList->next=head2;
	head2=newList;
	newList = new Node();
	newList->data=8;
	newList->next=head2;
	head2=newList;
	char ch;
	int num;
	int n;
	do{
	cout<<"\n\t\t\t\t MENU "<<endl;
	cout<<"1. Insert an element at the head of the singly linked list."<<endl;
	cout<<"2. Insert an element at the nth position of the singly linked list."<<endl;
	cout<<"3. Insert an element at the tail of the singly linked list."<<endl;
	cout<<"4. Delete an element from the head of the singly linked list."<<endl;
	cout<<"5. Delete an element from the nth position of the singly linked list."<<endl;
	cout<<"6. Delete an element from the tail of the singly linked list."<<endl;
	cout<<"7. Search for an element x in the singly linked list."<<endl;
	cout<<"8. Concatenate linked lists (existing list with created list)."<<endl;
	cout<<"9. Display the linked list."<<endl;
	cout<<"\nEnter your choice : "<<endl;
	int choice;
	int s;
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"\nEnter the element you want to insert at head : ";
				cin>>num;
				insertAtHead(num);
				display();
				break;
		case 2: cout<<"\nEnter the element you want to insert and at which position : ";
				cin>>num>>n;
				insertAtNth(num, n);
				display();
				break;
		case 3: cout<<"\nEnter the element you want to insert at tail : ";
				cin>>num;
				insertAtTail(num);
				display();
				break;
		case 4: deleteAtbegin();
				cout<<"\nElement Deleted!!!";
				display();
				break;
		case 5: cout<<"\nEnter the position of element you want to delete : ";
				cin>>n;
				deleteAtNth(n);
				display();
				break;
		case 6:	deleteAtend();
				cout<<"\nElement Deleted!!!";
				display();
				break;
		case 7: cout<<"\nEnter the element you want to search : ";
				cin>>num;
				s = search(num);
				if(s==0)
				cout<<"\nElement not found!!!";
				else
				cout<<"\nElement found!!! ";
				break;
		case 8: cout<<"\nConcatenating with existing linked list (i.e 8->5->1->NULL) : "<<endl;
				concatenate(head, head2);
				display();
				break;
		case 9: display();
				break;			 		
		default: cout<<"\nWrong Choice!!!";						 		
	}
	cout<<"\n\nPress y or Y to continue, any other key to exit.";
	cin>>ch;
	}while(ch=='y' || ch=='Y');
	display();
}