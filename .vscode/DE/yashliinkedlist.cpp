#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insertbefore(Node *head, int index, int datas)
{
    Node *newnode = new Node();
    newnode->data = datas;
    if (index == 0)
    {   
        newnode->next = head;
        head = newnode;
        cout << "Data is Inserted at Beginning" << endl;
        print(head);
    }
    int sizes = size(head);
    if (index == sizes)
    {
        Node * last = head;
        newnode->next=NULL;
        while(last->next!=NULL)
        {
            last=last->next;
        }
        last->next=newnode;
        cout << "Data is Inserted at Last" << endl;
        print(head);
    }
    Node * temp = head;
    int count=0;
    while(count<(index-1))//index 0 1 2 3
       {
           count++;
           temp=temp->next;
       }
       newnode->next=temp->next;
       temp->next=newnode;   
       print(head);
}
int main()
{
    int index, datas;
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    head->data = 11;
    head->next = second;
    second->data = 22;
    second->next = third;
    third->data = 33;
    third->next = fourth;
    fourth->data = 44;
    print(head);
    cout << "\nSize of the list : " << size(head) << endl;
    cout << "Enter Index where you want to insert before" << endl;
    cin >> index;
    cout << "Enter data to be insert" << endl;
    cin >> datas;
    insertbefore(head, index, datas);
}