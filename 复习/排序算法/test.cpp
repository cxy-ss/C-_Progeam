#include <iostream>

using namespace std;

int main()
{
    // 冒泡排序
    int arr[] = {9, 5, 6, 7, 2, 8, 3, 11, 45, 0, 90};
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    int temp;
    for (int i = 0; i < 11 - 1; i++)
    {
        for (int j = 0; j < 11 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // 升序排列
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    return 0;
}