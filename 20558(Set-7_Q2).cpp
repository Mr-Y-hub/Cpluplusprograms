/*
  Name                :- Yash Patidar
  Course              :- B.Sc. Computer Science
  Examination Roll No :- 20067570051  
  Unique Paper Code   :- 32341101
  Name of the Paper   :- PROGRAMMING FUNDAMENTALS USING C++
  Date of Submission  :- 9 March 2021
  Duration            :- 4 hr
  College Name        :- Shaheed Sukhdev College of Business Studies
  Set no              :- 7
  Semester            :- I */

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char a[20], b[20];
    FILE *f1, *f2;
    cout << " \tThis is the program to copy the data from one file to another " << endl;
    cout << " \tEnter a file where you want to copy " << endl;
    cout << " \t!!Also enter extension of file  " << endl;
    cout << " \t";
    cin >> a;
    f1 = fopen(a, "r");
    if (f1 == NULL)
    {
        cout << "The file name you have entered cannot open" << endl;
        exit(0);
    }
    cout << " \tEnter a file where you want to write" << endl;
    cout << " \t";
    cin >> b;
    f2 = fopen(b, "w");
    char c = fgetc(f1);

    while (c != EOF)
    {
        if (!isspace(c))
            fputc(c, f2);
        c = fgetc(f1);
    }
    fclose(f1);
    fclose(f2);
    cout << " The file is being copied" << endl;
}

