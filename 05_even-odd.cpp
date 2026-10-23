#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any integer:";
    cin>>num;
    if (num%2==0){
        cout<<"Your num is even.";
    }
    else if (num%2=!0){
        cout<<"Your num is odd.";
    }
    else{
        cout<<"invalid input.";
    }
    return 0;
}