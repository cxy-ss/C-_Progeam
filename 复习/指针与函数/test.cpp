#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swap, a = "<<a<<" b = "<<b<<endl;} 
void swap2(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"After swap, *a = "<<*a<<" *b = "<<*b<<endl;} 
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout<<"Before swap, a = "<<a<<" b = "<<b<<endl;
    swap2(&a, &b);
    cout<<"Before swap, a = "<<a<<" b = "<<b<<endl;
    return 0;
}