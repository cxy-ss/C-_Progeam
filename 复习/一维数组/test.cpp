#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10;i++){
        cout << arr[i] << endl;
    }
    cout << sizeof(arr)/sizeof(arr[0]);
    cout << (void*)&arr[4] << endl;//void*指针地址表示十六进制
    return 0;
}