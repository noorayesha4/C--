#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter any integer: ";
    cin>> num1;
    cout<<"Enter any integer: ";
    cin>> num2;
    if(num1>num2){
    cout<<num1<<" is greater than "<<num2;
}
    else if (num1<num2){
        cout<<num2<<" is greater than "<<num1;
    }
    else{
        cout<<"Both are same.";
    }
    return 0;
}