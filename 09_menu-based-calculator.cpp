#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int operate;
    cout<<"Enter any integer: ";
    cin>> num1;
    cout<<"Enter any integer: ";
    cin>> num2;
    cout<<"====Pick One===="<<endl;
    cout<<"1.Addition \t2.Subraction\n3.Multiplication \t4.Division\nYour answer(1-4): ";
    cin>>operate;
    switch (operate){
        case 1:
        cout<<num1+num2;
        break;
        case 2:
        cout<<num1-num2;
        break;
        case 3:
        cout<<num1*num2;
        break;
        case 4:
        if (num2!=0)
        {cout<<static_cast<double>(num1)/num2;
        }
        else{cout<<"Invalid input: zero can't divide.";}
        break;
        default:
        cout<<"Invalid input";

    }
    return 0;
    
}