#include <iostream>
using namespace std;
template <class T>
class Node
{
private:
    T data;
    Node *prev;
    Node *next;

public:
    Node(T val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
    template <class U>
    friend class DoubleLL;
};
template <class T>
class DoubleLL
{
    Node<T> *head;
    Node<T> *tail;

public:
    DoubleLL()
    {
        head = NULL;
        tail = NULL;
    }

    //insert at head
    void insertathead(T data)
    {

        Node<T> *temp = new Node<T>(data);
        if (head == NULL)
        {
            head = temp;
            if (tail == NULL)
                tail = head;
            return;
        }
        temp->next = head;
        head = temp;
        temp->next->prev = temp;
    }

    void traverse()
    {
        Node<T> *n = head;
        cout << "\nfrom head to tail:  ";
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next;
        }
        cout << "\nfrom tail to head:  ";
        Node<T> *p = tail;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->prev;
        }
        cout << "\nhead : " << head->data << "   tail: " << tail->data;
        cout << "\n";
    }

    void deleteindex(int index)
    {
        Node<T> *temp = NULL;
        if (index == 0)
        {
            cout << " if want to delete head use deletehead ";
            return;     
        }
        Node<T> *p = head;
        int count = 0;
        while (count < (index - 1) && p->next != NULL)
        {
            p = p->next;
            count++;
        }
        if (index > (count - 1) && p->next == NULL)
        {
            cout << "index not exist ";
            return;
        }
        temp = p->next;
        p->next = temp->next;
        temp->next->prev = p;
        delete (temp);
    }

    bool same(DoubleLL<T> list2)
    {
        Node<T> *a = head;
        Node<T> *b = list2.head;
        while (a != NULL && b != NULL)
        {
            if (a->data == b->data)
            {
                a = a->next;
                b = b->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    void oddlocation()
    {
        Node<T> *n = head;
        cout << "\n from head to tail:  ";
        while (n != NULL)
        {
            cout << n->data << " ";
            n = n->next->next;
        }
        cout << endl;
    }
    void average()
    {
        int count = 0;
        int sum = 0;
        Node<T> *n = head;
        while (n != NULL)
        {
            count++;
            sum += n->data;
            n = n->next;
        }
        int average = sum / count;
        cout << "Average of Number is " << average << endl;
    }
    void middle()
    {
        int count = 0;
        Node<T> *n = head;
        while (n != NULL)
        {
            count++;
            n = n->next;
        }
        int mid = count / 2;
        Node<T> *p = head;
        int index = 0;
        while (index != mid)
        {
            index++;
            p = p->next;
        }
        cout << "The Middle element is " << p->data << endl;
    }
};

int main()

{
    DoubleLL<int> list1; 
    list1.insertathead(6);
    list1.insertathead(5);
    list1.insertathead(4);
    list1.insertathead(3);
    list1.insertathead(2);
    list1.insertathead(1);

    cout << "Doubly linked list is: ";
    list1.traverse();
    char ch;
    int x, index;
    int data;            
    DoubleLL<int> list2; 
    do
    {
        cout << "Press 1 to Insert an element x at the head of the doubly linked list\n";
        cout << "Press 2 to Remove an element from position 2 in the doubly linked list\n";
        cout << "Press 3 Display element at all odd locations\n";
        cout << "Press 4 Find average of all elemets in the list.\n";
        cout << "Press 5 Find the middle element of list\n";
        cout << "Press 6 Check whether two linked lists are same or not\n";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "Enter data to to be inserted: ";
            cin >> data;
            list1.insertathead(data);
            cout << "\nThe new list is: ";
            list1.traverse();
            break;
        case 2:
            index = 1;
            list1.deleteindex(index);
            cout << "The new list is: ";
            list1.traverse();
            break;
        case 3:
            list1.oddlocation();
            break;
        case 4:
            cout<<"Average will be calculated only you enter a linked list of integers "<<endl;
            list1.average();
            break;
        case 5:
            list1.middle();
            break;

        case 6:
            list2.insertathead(6);
            list2.insertathead(5);
            list2.insertathead(4);
            list2.insertathead(3);
            list2.insertathead(2);
            list2.insertathead(1);
            cout << "\n the second list is: ";
            list2.traverse();
            bool var = list1.same(list2);
            if (var == true)
            {
                cout << "List is same" << endl;
            }
            else
            {
                cout << "List is not same" << endl;
            }
            break;
        }
        cout << "If want to continue press y else any other key: ";
        cin >> ch;
        cout<<endl;
    } while (ch == 'y' || ch == 'Y');
}
