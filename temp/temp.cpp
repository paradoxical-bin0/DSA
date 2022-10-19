#include <iostream>
#include "Queue.h"
using namespace std;
class Tree
{
public:
    Node *root;
    Tree() { root = NULL; }
    void CreatTree();
    void Preorder(Node *p);
};
void Tree::CreatTree()
{
    Node *t, *p;
    int x;
    Queue q(100);
    cout << "Enter root value : ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter left child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        cout << "Enter right child of " << p->data << " : ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void Tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
int main()
{
    Tree t;
    t.CreatTree();
    t.Preorder(t.root);
    return 0;
}