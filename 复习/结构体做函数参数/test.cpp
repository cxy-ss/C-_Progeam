#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};
void printstudent1(student s){
    s.name = "lisi";
    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.score << endl;
}
void printstudent2(student *s){
    s->age = 80;
    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->score << endl;
}
int main(){
    student s1 = {"zhangsan", 18, 100};
    //printstudent1(s1);
    printstudent2(&s1);
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.score<<endl;
    return 0;
}