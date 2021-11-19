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
void deleteelement(Node *head, int key)   // 0 1 2 3   11 22 33 44 
{   
    Node * temp = head;
    Node * prev = NULL;
    if(temp!=NULL && temp->data==key)
    {
        head=temp->next;
        delete temp;
        cout<<"Delete from head"<<endl;
        print(head);
        return;
    }  

    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Key Not found"<<endl;
        return;
    }
    prev->next=temp->next;
    delete temp;
    print(head); 

}
int main()
{
    int key, datas;
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
    cout << "Enter key where you want to delete" << endl;
    cin >> key;
    deleteelement(head, key);
}