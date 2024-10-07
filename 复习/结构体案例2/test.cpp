#include <iostream>
using namespace std;
struct Hero
{
    string name;
    int age;
    string sex;
};
void paixu(Hero hero[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (hero[j].age > hero[j + 1].age)
            {
                Hero temp = hero[j];
                hero[j] = hero[j + 1];
                hero[j + 1] = temp;
            }
        }
    }
}
void print(Hero hero[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "name: " << hero[i].name << "\t age: " << hero[i].age << "\t sex: " << hero[i].sex << endl;
    }
}
int main()
{
    Hero hero[5] = {
        {"guanyu", 80, "nan"},
        {"zhaoyun", 70, "nan"},
        {"zhangfei", 90, "nan"},
        {"machao", 95, "nan"},
        {"huangzhou", 46, "nan"},
    };
    int len = sizeof(hero) / sizeof(hero[0]);
    paixu(hero, len);
    print(hero, len);
    return 0;
}
