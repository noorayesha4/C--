#include <iostream>
using namespace std;
void even_old_check(int num){
    if(num%2==0){
        cout<<"your num is even.";}
        else if(num%2!=0){
            cout<<"your num is odd.";
        }}
        int main(){
        int number;
        cout<<"Enter any num: ";
        cin>>number;
        even_old_check(number);
        return 0;}
     