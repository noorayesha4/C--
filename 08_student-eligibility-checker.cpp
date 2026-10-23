#include <iostream>
using namespace std;
int main(){
    int age;
    int marks;
    cout<<"Enter your age: ";
    cin>> age;
    cout<<"Enter your marks: ";
    cin>> marks;
         if(age<0||marks>100||marks<0){
            cout<<"Invalid input";}
        else if(age>=18&&marks>=50){
        cout<<"Congragulations! You are eligible.";}
        else{
            cout<<"You are not eligible.";
        }
        return 0;
    

}