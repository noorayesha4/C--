#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    float height;
    char grade;
    double percentage;
    bool enrolled;
    cout<<"=======STUDENT INFORMATION======="<<endl;
    cout<<"Enter your name: ";
    cin>> name;
    cout<<"Enter your age: ";
    cin>> age;
    cout<<"Enter your height: ";
    cin>> height;
    cout<<"Enter your grades: ";
    cin>> grade;
    cout<<"Enter your percentage: ";
    cin>> percentage;
    cout<<"Are you enrolled? yes=1 or no=0? ";
    cin>> enrolled;
    cout<<"======STUDENT DETAILS======";
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Height:"<<height<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Percentage:"<<percentage<<endl;
    cout<<"Enrolled:"<<enrolled<<endl;
    cout<<"====THANK YOU====";
    return 0;
}