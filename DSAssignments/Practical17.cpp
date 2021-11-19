// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[50][50];
//     int count=0;
//     int out=0;
//     int in=0;
//     int i,j;
//     char ch;
//     int v,e;

//     cout<<"\n Enter the number of vertex : "<<endl;
//     cin>>v;

//     cout<<"\n Enter the edges for the graph : "<<endl;
//     for(int i=0;i<v;i++)
//     {
//         for(int j=0;j<v;j++)
//         {
//             cout<<"\n Enter the no. of edges ";
//             cout<<"from"<<" "<<(char)(i+97)<<" "<<"to vertex"<<" "<<(char)(j+97)<<"  : ";
//             cin>>e;
//             if(e>0)
//             {
//                 arr[i][j]=e;
//             }
//             else
//                 arr[i][j]=0;
//         }
//     }

//     cout<<"\n The matrix you entered is : "<<endl;
//     for( i=0;i<v;i++)
//     {
//         for(j=0;j<v;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     for( i=0;i<v;i++)
//     {
//         for(j=0;j<v;j++)
//         {
//             if(arr[i][j]>0)
//             {
//                 out=out+arr[i][j];	
//             }
//         }
//         cout<<"\n The out degree of the vertex is"<<(char)(i+97)<<out;
//         out=0;
//     }

//     for(int i=0;i<v;i++)
//     {
//         for(int j=0;j<v;j++)
//         {
//         if(arr[j][i]>0)
//             {
//                 in=in+arr[j][i];
//             }
//         }
//         cout<<"\n The in degree of the vertex is"<<(char)(i+97)<<in;
//         in=0;
//     }
// }

// Write a Program to accept a directed graph G and compute the in-degree and out-degree of
//each vertex.

#include <iostream>
using namespace std;
class DirectedGraph
{
private:
    int a, b, n, v;
    int num;
    int *set;
    int **mat;

public:
    void inputVertices();
    void adjacencyMatrix();
    void addEdge(int, int);
    void inputEdge();
    void inDegree(int);
    void outDegree(int);
    void display();
};

void DirectedGraph::inputVertices()
{
    cout << "Enter the number of vertices for the directed graph:" << endl;
    cin >> num;
}

void DirectedGraph::adjacencyMatrix()
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

void DirectedGraph::addEdge(int x, int y)
{
    mat[(x - 1)][(y - 1)] = 1;
}

void DirectedGraph::inputEdge()
{
    cout << "Enter the number of edges you want to enter:" << endl;
    cin >> n;
    cout << "Enter the pair of vertices between which the edge should be formed:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter pair " << (i + 1) << ":" << endl;
        cin >> a >> b;
        addEdge(a, b);
    }
}

void DirectedGraph::inDegree(int v)
{
    int c = 0;
    for (int i = 0; i < num; i++)
    {
        if (mat[i][v] == 1)
        {
            c = c + 1;
        }
    }

    cout << c << endl;
}

void DirectedGraph::outDegree(int v)
{
    int d = 0;

    for (int j = 0; j < num; j++)
    {
        if (mat[v][j] == 1)
        {
            d = d + 1;
        }
    }
    cout << d << endl;
}

void DirectedGraph::display()
{
    for (int i = 0; i < num; i++)
    {
        cout << "In-degree of vertex " << (i + 1) << " is:" << endl;
        inDegree(i);

        cout << "Out-degree of vertex " << (i + 1) << " is:" << endl;
        outDegree(i);
    }
}

int main()
{
    DirectedGraph G;
    G.inputVertices();
    G.adjacencyMatrix();
    G.inputEdge();
    G.display();
}
