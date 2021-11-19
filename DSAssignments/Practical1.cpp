/*
    @name : Yash Patidar
    @version : 001
    Practical No: 1
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class set
{
    int *ar;
    int size;

public:
    set()
    {
        size = 10;
        ar = new int[size];
    }
    void input()
    {
        cout << "enter the size of array" << endl;
        cin >> size;
        ar = new int[size];
        cout << "enter the array elements" << endl;
        for (int i = 0; i < size; i++)
            cin >> ar[i];
    }
    void display()
    {
        cout << "the given set is {";
        for (int i = 0; i < size; i++)
        {
            if (i == 0)
                cout << ar[i];
            else
                cout << "," << ar[i];
        }
        cout << "}" << endl;
    }
    void cardinality()
    {
        cout << "The cardinality of given set is " << size << endl;
    }
    void unique();
    void ismember();
    void powerset();
};

void set::unique()
{
    int i, j, l;
    for (i = 0; i < size; ++i)      // 1 2 3 4
    {
        for (j = i + 1; j < size;)
        {
            if (ar[i] == ar[j])
            {
                for (l = j; l < size - 1; ++l)
                    ar[l] = ar[l + 1];
                --size;
            }
            else
                ++j;
        }
    }
}

void set::powerset()
{
    int count, temp;
    count = pow(2, size);
    cout << "{ {},";
    for (int i = 1; i < count; i++)
    {
        temp = i;  // a ab ac b bc c abc 
        cout << "{";
        for (int j = 0; j < size; j++)
        {
            if (temp & 1)   //bitwise 
                cout << ar[j] << ",";   // 1 0 0 
            temp = temp >> 1;   //  
        }
        cout << "\b}";
    }
    cout << " }";
}

void set::ismember()
{
    int e, flag = 0;
    cout << "enter the element to be search" << endl;
    cin >> e;

    for (int i = 0; i < size; i++)
        if (e == ar[i])
        {
            flag = 1;
            break;
        }
    if (flag)
        cout << "given element belong to set " << endl;
    else
        cout << "given element not belong to set" << endl;
}

int main()
{
    int ch;
    char ch1;
    set a;
    a.input();
    a.unique();
    a.display();
    a.cardinality();
    do
    {
        cout << "Enter your choice" << endl;
        cout << "1.Power set" << endl;
        cout << "2.Is member" << endl;
        cout << "3.Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            a.powerset();
            break;
        case 2:
            a.ismember();
            break;
        case 3:
            exit(0);

        default:
            cout << "wrong choice!!..";
            break;
        }
        cout << endl
             << "Do you want to enter more" << endl;
        cin >> ch1;
    } while ((ch1 == 'y') || (ch1 == 'Y'));
    return 0;
}