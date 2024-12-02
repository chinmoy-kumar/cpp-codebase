#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r){
    if(l.marks < r.marks){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    

    return 0;
}

/* sample input
        6
        sakib 16 89
        rakib 25 98
        akib 12 53
        sifat 14 28
        rifat 13 66
        ifat 39 86
*/

/* sample output
        sifat 14 28
        akib 12 53
        rifat 13 66
        ifat 39 86
        sakib 16 89
        rakib 25 98
*/