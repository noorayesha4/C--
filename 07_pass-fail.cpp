#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your subject marks: ";
    cin>> marks;
    if (marks>=50&&marks<=100){
        cout<<"Congragulations! u passed.";
    }
    else if (marks<50&&marks>=0){
        cout<<"You failed.";
    }
    else if (marks>100||marks<0){
    cout<<"Invalid input";
 }
 return 0;
}