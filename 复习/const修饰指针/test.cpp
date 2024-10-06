#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    // 常量指针
    const int *p = &a; // 可以修改指针指向，不可以修改指针的值;
    /*
    *p=20是错误的，
    p=&b是正确的
     */
    // 指针常量
    int const *p = &a; // 可以修改指针的值，不可以修改指针的指向
    /*
  *p=20是正确的，
  p=&b是错误的
   */
    //const修饰指针和常量
    const int * const p = &a; // 指针指向的值和指针本身是常量，不能修改
    return 0;
}