#include <iostream>
using namespace std;
//整型类型：short（2字节），int（4字节），long（4字节），longlong（8字节）
//sizeof可以求出整型类型占用的内存大小
int main()
{
    int a = 10;
    double b = 20.5;
    char c = 'a';
    bool d = true;
    short a1 = 10;
    long a2 = 11;
    long long a3 = 12;
    cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of double: " << sizeof(b) << endl;
    cout << "Size of char: " << sizeof(c) << endl;
    cout << "Size of bool: " << sizeof(d) << endl;
    cout << "short" << sizeof(short) << endl;
    cout << "long long" << sizeof(a3) << endl;
    cout << "long" << sizeof(a2) << endl;
    return 0;
}