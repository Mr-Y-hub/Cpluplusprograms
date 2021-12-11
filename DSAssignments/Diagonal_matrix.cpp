// Diagonal matrix :  M[i,j] = 0 if i!=j    else   M[i,j] != 0 if i==j 
// 
// for size of matrix n*n --> need array of size 'n' only for storing num (diagonal element only)
// 
// access element throw array --> M[i,j] = array[i-1] or array[j-i]

#include <iostream>
using namespace std;

class Diagonal_Matrix
{
private:
    int size;
    int *arr;

public:
    Diagonal_Matrix(int size)
    {
        this->size = size;
        this->arr = new int[this->size];
    }

    ~Diagonal_Matrix()
    {
        delete[] arr;
    }

    void set(int i, int j, int num)
    {
        if (i == j)
            this->arr[i - 1] = num;
    }

    int get(int i, int j)
    {
        if (i == j)
            return this->arr[i - 1];
        else
            return 0;
    }

    void Display()
    {
        for (int i = 1; i <= this->size; i++)
        {
            for (int j = 1; j <= this->size; j++)
            {
                cout << this->get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Diagonal_Matrix obj(10);

    cout<<"Enter 10 Numbers for Diagonal Matrix : "<<endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i == j)
            {
                int num;
                cin >> num;
                obj.set(i, j, num);
            }
        }
    }

    cout<<"This is the Diagonal Matrix : "<<endl;

    obj.Display();

    return 0;
}