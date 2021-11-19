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

void Inorder(Tree_Node *p)
{
    if (p == NULL)
        return;

    Inorder(p->Lchild);
    cout << p->data << " ";
    Inorder(p->Rchild);
}

Tree_Node *InPre(Tree_Node *p)
{
    while (p && p->Rchild != NULL)
        p = p->Rchild;

    return p;
}
Tree_Node *InSucc(Tree_Node *p)
{
    while (p && p->Lchild != NULL)
        p = p->Lchild;

    return p;
}

int Height(Tree_Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;

    x = Height(p->Lchild);
    y = Height(p->Rchild);
    return x > y ? x + 1 : y + 1;
}

Tree_Node *Delete(Tree_Node *p, int key)
{
    Tree_Node *q;

    if (p == NULL)
        return NULL;

    if (p->Lchild == NULL && p->Rchild == NULL) // if it leaf node
    {
        if (p == root)  // if it root node
            root = NULL;
        free(p);
        return NULL;
    }

    if (key < p->data)
        p->Lchild = Delete(p->Lchild, key);
    else if (key > p->data)
        p->Rchild = Delete(p->Rchild, key);
    else
    {
        if (Height(p->Lchild) > Height(p->Rchild))
        {
            q = InPre(p->Lchild);
            p->data = q->data;
            p->Lchild = Delete(p->Lchild, q->data);
        }
        else
        {
            q = InSucc(p->Rchild);
            p->data = q->data;
            p->Rchild = Delete(p->Rchild, q->data);
        }
    }
    return p;
}

int main()
{
    root = insert_recursive(root, 30);
    insert_recursive(root, 10);
    insert_recursive(root, 20);
    insert_recursive(root, 20);
    insert_recursive(root, 50);
    insert_recursive(root, 10);
    insert_recursive(root, 45);
    insert_recursive(root, 15);
    insert_recursive(root, 40);
    Delete(root, 30);

    cout << "Inorder" << endl;
    Inorder(root);
    cout << endl;

    return 0;
}