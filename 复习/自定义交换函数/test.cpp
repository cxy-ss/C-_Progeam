#include <iostream>

using namespace std;

void swap(int a, int b)
{
    cout << "Before swapping: a = " << a << "  " << " b = " << b << endl;
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << "   " << "b = " << b << endl;
}
int main()
{
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << "  "<<" b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << "   "<<"b = " << b << endl;
    return 0;
}