#include <iostream>
using namespace std;

int main()
{
    int num;
    for (num = 1; num < 100;num++){
        if(num%10==7||num/10==7||num%7==0)
            cout << "qi" << endl;
        else
            cout << num << endl;
    }
        return 0;
}