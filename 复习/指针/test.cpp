#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    cout << "the location of a is  " << &a << endl;
cout << "p:" << p << endl;
    *p = 100;
    cout << "a:" << a << endl;
    cout << "*p:" << *p << endl;
    cout << "sizeof(int *)" << sizeof(p) << endl;
    return 0;
}