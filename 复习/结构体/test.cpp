#include <iostream>

using namespace std;
struct student{
    string name;
    int age;
    int score;
} s1, s2;
    int main()
    {
        s1.name = "zhangsan";
        s1.age = 20;
        s1.score = 90;
        s2 = {"lisi", 18, 100};
        cout << "s1 name is " << s1.name << endl;
        cout << "s1 age is " << s1.age << endl;
        cout << "s1 score is " << s1.score << endl;
        cout << "s2 name is " << s2.name << endl;
        cout << "s2 age is " << s2.age << endl;
        cout << "s2 score is " << s2.score << endl;
        return 0;
}