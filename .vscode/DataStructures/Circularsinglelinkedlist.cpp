#include <iostream>
using namespace std;
template <class T>
class Node 
{   public:
    T data;
    Node* next;
    Node(T val)
    {
        data=val;
        next=NULL;
    }

};
template <class T>
class Circular
{   
    Node <T>* head;
    public:
    Circular()
    {
        head=NULL;
    }

    void insertathead(T data)
    {
        Node <T> * new_node = new Node<T>(data);
        Node <T> * p = head;
        if(head==NULL)
        {
            head=new_node;
            new_node->next=head;
            return;
        }
        else
        {
            new_node->next=head;
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=new_node;
            head=new_node;
        }

    }
    void display()
    {
      Node<T>* ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }    
    else{
        while(ptr->next!=head)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
        cout<<ptr->data<<"  ";
    }
    }
    void deletefromend()
    {   
        if(head->next == head)  
        {  
        head = NULL;  
        free(head);  
        printf("\nFull list Deleted");  
        }  
        Node<T> * p=head;
        while(p->next->next!=head)
        {
            p=p->next;
        }
        Node <T>* temp = p->next;
        p->next=head;
        temp=NULL;
        delete(temp);
    }
};
//template <class sT>
int main()
{   
    Circular<int> c;
    c.insertathead(12);
    c.insertathead(11);
    c.insertathead(10);
    c.insertathead(9);
    c.display();
    cout<<endl;
    c.deletefromend();
    c.deletefromend();
    c.deletefromend();
    c.deletefromend();
    c.display();
}

