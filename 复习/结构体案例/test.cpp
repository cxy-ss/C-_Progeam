#include <iostream>
using namespace std;
#include<ctime>
struct student{
    string sname;
    int score;
};
struct teacher{
    string tname;
    student sarr[5];
};
void fuzhi(struct teacher tarr[],int len){
    string nameseed = "ABCDE";
    for (int i = 0; i < len;i++){
        tarr[i].tname = "Teacher_";
        tarr[i].tname += nameseed[i];
        for (int j = 0; j < 5; j++){    
            tarr[i].sarr[j].sname = "Student_";
            tarr[i].sarr[j].sname += nameseed[j];
            int random = rand() % 61 + 40;
            tarr[i].sarr[j].score = random;
    }
    }
}
void printfInfo(struct teacher tarr[],int len){
    for (int i = 0; i < len; i++){
        cout << "Teacher Name: " << tarr[i].tname << endl;
        for (int j = 0; j < 5; j++){
            cout << "\tStudent Name: " << tarr[i].sarr[j].sname << " Score: " << tarr[i].sarr[j].score << endl; 
}
    }
}
int main(){
    srand((unsigned int)time(NULL)); 
    struct teacher tarr[3];
    int len;
    len=sizeof(tarr)/sizeof(teacher);
    fuzhi(tarr,len);
    printfInfo(tarr,len);
    return 0;
}