#include<iostream>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};
struct teacher{
    int id;
    string name;
    int age;
    struct student s1;
};
int main(){
    /*for (int i = 0; i < 3;i++){
       cout<<stuarray[i].name<<" "<<stuarray[i].age<<" "<<stuarray[i].score<<endl;
    }
    student *p = stuarray;
    cout<<p->name<<" "<<p->age<<" "<<p->score<<endl;
    p++;
    cout<<p->name<<" "<<p->age<<" "<<p->score<<endl;
    p++;
    cout<<p->name<<" "<<p->age<<" "<<p->score<<endl;
*/
    teacher t1;
    t1.id = 1001;
    t1.name = "zhangsan";
    t1.age = 25;        
    t1.s1.age = 20;
    t1.s1.name = "lisi";
    t1.s1.score = 100;
    cout<<t1.id<<" "<<t1.name<<" "<<t1.age<<" "<<t1.s1.name<<" "<<t1.s1.age<<" "<<t1.s1.score<<endl;
    return 0;

}