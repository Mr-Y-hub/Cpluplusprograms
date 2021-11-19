#include <iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *prev, *next;
    // constructor
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};


class Deque
{
    Node* head;
    Node* tail;
    int Size;

public:
    //initialize deque as stated in step 1 
    Deque()
    {
        head = tail = NULL;
        Size = 0;
    }

    // exhaustive list of functions as discussed above  
    void insertFront(int data);
    void insertRear(int data);
    void deleteFront();
    void deleteRear();
    int getFront();
    int getRear();
    int size();
    bool isEmpty();
};

// this function will check if the deque is empty or not
bool Deque::isEmpty()
{
    return (head == NULL);
}

// This function returns total count of elements in the deque
int Deque::size()
{
    return Size;
}

// This function will insert the element at the front of the    // deque
void Deque::insertFront(int data)
{
    Node* newNode = new Node(data);
    // if newNode is Null then no nodes can be created as 
     // memory is full 
    if (newNode == NULL)
        cout << "OverFlow\n";
    else
    {
        // If deque is empty
        if (head == NULL)
            tail = head = newNode;

        // Inserts an element at the beginning of the list
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        // Increase size by 1
        Size++;
    }
}

// This function will insert the element at the back of the    // deque
void Deque::insertRear(int data)
{
    Node* newNode = new Node(data);
    // if newNode is Null then no nodes can be created as 
     // memory is full
    if (newNode == NULL)
        cout << "OverFlow\n";
    else
    {
        // If deque is empty
        if (tail == NULL)
            head = tail = newNode;

        // Inserts an element at the end of the list
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        // Increase size by 1
        Size++;
    }
}

// This function will delete an element from front of the       // deque
void Deque::deleteFront()
{
    // If there are no elements in deque, we cannot delete 
    // anything
    if (isEmpty())
        cout << "UnderFlow\n";

    // Delete the front node and update the ‘head’ pointer as  
     // well as update the links 
    else
    {
        Node* temp = head;
        head = head->next;

        // If only one element was present
        if (head == NULL)
            tail = NULL;
        else
            head->prev = NULL;
        free(temp);

        // Decrease ‘size’ by 1
        Size--;
    }
}

// This function will delete an element from back of the       // deque
void Deque::deleteRear()
{
    // If there are no elements in deque, we cannot delete 
    // anything
    if (isEmpty())
        cout << "UnderFlow\n";

    // Delete the back node and update the ‘tail’ pointer as  
     // well as update the links
    else
    {
        Node* temp = tail;
        tail = tail->prev;

        // If only one element was present
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;
        free(temp);

        // Decrease ‘size’ by 1
        Size--;
    }
}

// this function will return front element of the deque
int Deque::getFront()
{
    // If there are no elements in deque, return -1
    if (isEmpty())
        return -1;
    return head->data;
}

// this function will return rear element of the deque
int Deque::getRear()
{
    // If there are no elements in deque, return -1
    if (isEmpty())
        return -1;
    return tail->data;
}


int main()
{
    Deque dq;
    cout << "Insert element '2' at rear end\n";
    dq.insertRear(2);

    cout << "Insert element '0' at rear end\n";
    dq.insertRear(0);

    cout << "Rear end element: "
        << dq.getRear() << endl;

    dq.deleteRear();
    cout << "After deleting rear element new rear"
        << " is: " << dq.getRear() << endl;

    cout << "Inserting element '27' at front end \n";
    dq.insertFront(27);

    cout << "Front end element: "
        << dq.getFront() << endl;

    cout << "Number of elements in Deque: "
        << dq.size() << endl;

    dq.deleteFront();
    cout << "After deleting front element new "
        << "front is: " << dq.getFront() << endl;

    return 0;
}