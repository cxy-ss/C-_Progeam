#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() // 主函数
{
    int arr[] = {300, 400, 900, 600, 500, 300};
    // 求数组中的最大值
    int max = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "The max number is: " << max << endl;
    // 将数组中的元素逆置
    int arr2[] = {1, 3, 2, 5, 4};
    int start = 0;
    int end = 4;
    int temp = 0;
    while (start < end)
    {
        temp = arr2[start];
        arr2[start] = arr2[end];
        arr2[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }
    return 0;
}