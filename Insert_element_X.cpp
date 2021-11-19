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
    cout << endl;

    return 0;
}