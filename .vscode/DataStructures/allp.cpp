#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = NULL;
    Node *prev = NULL;
    Node(int val)
    {
        data = val;
    }
};
class Linkedlist
{
    Node *head = NULL;
    Node *tail = NULL;

public:

    void traverse()
    {
        Node *n = head;
        if (n == NULL)
        {
            cout << "No element exist";
            return;
        }
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
    }

    void insertathead(int new_data)
    {
    
    Node* new_node = new Node(new_data);
    if (head==NULL)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
    }

    void insertatindex(int data, int index)//5  3 
    {
        Node * new_node = new Node(data);
        if (head==NULL)
        {
            cout<<"Empty List please enter something"<<endl;
            return;
        }
        Node * n = head;
        int count=0;
        while(count < (index-1) && n->next!=NULL)
        {   
            n = n ->next;
            count++;    
        }
        if (index > count && n->next == NULL)
        {
            cout <<"Index Not exist "<<endl;
        }        
        new_node->next=n->next;
        n->next=new_node;
        new_node->prev=n;
        new_node=n->next->prev;
    }
    void insertattail(int data)
    {   
        Node * new_node = new Node(data);
        if ( tail == NULL )
        {
            cout<<"List is empty so element is started at head"<<endl;
            tail=new_node;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    void removefrombeginning()
    {
        if (head==NULL)
        {
            cout<<"List is empty"<<endl;
        }
        Node * delete_node=head;
        head = delete_node->next;
        head->prev=NULL;
        delete_node=NULL;
        delete(delete_node);
    }
    void removefromindex(int index)
    {
        Node * p = head;
        Node * temp = NULL;
        int count =0;
        while(count < ( index-1) && p->next != NULL)
        {
            p=p->next;
            count++;
        }
        if(index>(count-1)&&p->next==NULL){
			cout<<"index not exist ";
            return;
        }
        temp=p->next;
        p->next=temp->next;
        temp->next->prev=p;
        temp=NULL;
        delete(temp);
    }
    void deletefromtail()
    {
        if ( tail == NULL )
        {
            cout<<"List is empty what are you inserting "<<endl;
            return;
        }
        Node * delete_node = tail;
        tail = delete_node->prev;
        tail ->next = NULL;
        delete_node = NULL;
        delete(delete_node);
    }
};
int main()
{
    Linkedlist l;
    l.insertathead(7);
    l.insertathead(6);
    l.insertathead(4);
    l.insertathead(3);
    l.insertathead(2);
     l.traverse();
    cout << "\nthe linked list is:\n ";
    l.insertatindex(5,3);//element index
    cout<<"insert at tail"<<endl;
    l.traverse();
    l.insertattail(8);              
    l.insertattail(9); 
    cout<<"\nREmove from beginning"<<endl;
    l.removefrombeginning();
    l.traverse();
    cout<<"\n Remove from specific Position like 2"<<endl;
    l.removefromindex(2);//index
    l.traverse();
    cout<<"\n Delte from tail "<<endl;
    l.deletefromtail();
    l.traverse();
} 