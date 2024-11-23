#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    Student a;
    a.roll = 23;
    a.cgpa = 3.7;

    // way of char array data initialization
    char temp[100] = "Sakib";
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.cgpa << " " << endl;

    return 0;
}