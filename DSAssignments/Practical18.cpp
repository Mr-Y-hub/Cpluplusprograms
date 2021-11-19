#include <iostream>
using namespace std;
class Graph
{
private:
    int a, b, n, v;
    int num;
    int *set;
    int **mat;
    int x, y;

public:
    void inputVertices();
    void adjacencyMatrix();
    void addEdge(int, int);
    void inputEdge();
    int Degree(int);
    void EulerCircuit();
};

void Graph::inputVertices()
{
    cout << "Enter the number of vertices for the graph:" << endl;
    cin >> num;
}

void Graph::adjacencyMatrix()
{
    mat = new int *[num];
    for (int i = 0; i < num; i++)
    {
        mat[i] = new int[num];
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            mat[i][j] = 0;
        }
    }
}

void Graph::addEdge(int x, int y)
{
    mat[(x - 1)][(y - 1)] = 1;
}

void Graph::inputEdge()
{
    cout << "Enter the number of edges you want to enter:" << endl;
    cin >> n;
    cout << "Enter the pair of vertices between which the edge should be formed:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter pair " << (i + 1) << ":" << endl;
        cin >> a >> b;
        addEdge(a, b);
        addEdge(b, a);
    }
}

int Graph::Degree(int v)
{
    x = 0;
    for (int i = 0; i < num; i++)
    {
        if (mat[i][v] == 1)
        {
            x += 1;
        }
    }

    return x;
}

void Graph::EulerCircuit()
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (Degree(i) % 2 != 0)
        {
            count++;
        }
    }
    if (count == 2 || count == 0)
    {
        cout << " IT is an Euler Path  " << endl;
    }
    if (count == 0)
    {
        cout << " It is an Euler Circuit and an Euler Path also" << endl;
    }
}

int main()
{
    Graph G;
    G.inputVertices();
    G.adjacencyMatrix();
    G.inputEdge();
    G.EulerCircuit();
}
