#include <iostream>
using namespace std;

int main()
{
    int scores[3][3]{
        {100, 100, 100},
        {100, 50, 100},
        {60, 70, 80}};
    string names[3] = {"zhangsan", "lisi", "wangwu"};
    for (int i = 0; i < 3;i++){
        int sum = 0;
        for (int j = 0; j < 3;j++){
            sum += scores[i][j];
        }
        cout << "student:" << names[i]<<"\t" << "sum:" << sum << endl;
    }
        return 0;
}