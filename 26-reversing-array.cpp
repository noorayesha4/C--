#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        cout<<"Enter any  number: ";
        cin>>num[i]; }
        for(int i=4;i>=0;i--){
            cout<<num[i]<<" ";
        }
        return 0;
}