#include <iostream>
using namespace std;
int main()
{
    /*int a;
    cout << "please input a unmber."<<endl;
    cin >> a;
    if(a>=600)
        cout << "a is greater than 600.";
        else
            cout << "a is less than 600.";*/
    /*int a;
    cout << "please input your score."<<endl;
    cin >> a;
    if(a>=600){
        cout << "you are excellent." << endl;}
        else if(a>=500){
            cout << "you are good." << endl;}
            else if(a>=400){
                cout << "you are right." << endl;}
                else 
                cout << "you are pass." << endl;
            */
    /*int score;
    cout << "please input your score." << endl;
    cin >> score;
    if(score>=600){
        if(score>=700)
            cout << "you are excellent.";
        else if(score>=650)
            cout << "you are good.";
        else
            cout << "you are right.";
    }*/
    int a;
    int b;
    int c;
    cin >> a >> b;
    /*if(a>b){
        if(a>c)
            cout << "a is the greatest,";
        else
            cout << "c is the greatest.";
    }else{
        if(b>c)
        cout << "b is the greatest.";
        else
            cout<< "c is the greatest.";}
*/
//三目运算符的使用
    c = a > b ? a : b;
    cout << c << endl;
    return 0;
}