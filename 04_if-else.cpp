#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>> num;
    if(num>0){
        cout<<"Your number is positive.";
    }
    else if(num<0){ 
        cout<<"Your number is negative.";
    }
    else if(num==0){
        cout<<"Your number is zero.";
    }
   else{
    cout<<"Invalid input.";
   }
   return 0;
}