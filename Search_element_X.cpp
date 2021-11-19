#include <iostream>
using namespace std;

class Tree_Node
{
public:
    Tree_Node *Lchild;
    int data;
    Tree_Node *Rchild;

    Tree_Node()
    {
        this->Lchild = NULL;
        this->data = -1;
        this->Rchild = NULL;
    }
} *root = NULL;

void Inorder(Tree_Node *p)
{
    if (p == NULL)
        return;

    Inorder(p->Lchild);
    cout << p->data << " ";
    Inorder(p->Rchild);
}

Tree_Node *insert_recursive(Tree_Node *p, int key)
{
    Tree_Node *t;
    if (p == NULL)
    {
        t = new Tree_Node;
        t->data = key;
        return t;
    }

    if (key < p->data)
        p->Lchild = insert_recursive(p->Lchild, key);
    else if (key > p->data)
        p->Rchild = insert_recursive(p->Rchild, key);

    return p;
}

Tree_Node *Binary_Search_Recursive(Tree_Node *t, int key)
{
    if (t == NULL)
        return NULL;

    if (key == t->data)
        return t;
    else if (key < t->data)
        return Binary_Search_Recursive(t->Lchild, key);
    else
        return Binary_Search_Recursive(t->Rchild, key);
}

int main()
{
    root = insert_recursive(root, 10);
    insert_recursive(root, 30);
    insert_recursive(root, 20);
    insert_recursive(root, 60);
    insert_recursive(root, 35);
    insert_recursive(root, 50);
    insert_recursive(root, 40);
    insert_recursive(root, 25);
    insert_recursive(root, 10);

    cout << "Inorder" << endl;
    Inorder(root);
    cout << "\n" << endl;

    int key;
    cout << "Entre element to search :";
    cin >> key;

    if (Binary_Search_Recursive(root, key))
        cout << "Element Found :) " << endl;
    else
        cout << "Element Not Found :( " << endl;

    return 0;
}