#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 100;i++){
        if(i%2==0)
            continue;
        cout << i <<"\t";
        if(i%10==9)
            cout << endl;
    }
        return 0;
}