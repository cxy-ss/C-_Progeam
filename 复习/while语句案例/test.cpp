#include <iostream>
using namespace std;
#include<ctime>
int main()
{
    srand((unsigned int)time(NULL));
    int val;
    int num = rand() % 100 + 1; // 生成1到100之间的随机数
    while(1){
        cin >> val;
        if(val<num)
            cout << "gauss the number is smaller."<<endl;
        else if(val>num)
            cout << "gauss the number is larger."<<endl;
        else if(val=num){
            cout << "you are right!";
            break;}
    }
    return 0;
}