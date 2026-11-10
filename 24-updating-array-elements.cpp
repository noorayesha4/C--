#include<iostream>
using namespace std;
int main(){
    int num[5];
    for(int i=0;i<5;i++){
        cout<<"Enter any num: ";
        cin>>num[i];
    }
    int indx;
    cout<<"Enter index u want to update: ";
    cin>>indx;
     while(indx>4||indx<0){
        cout<<"Invalid input (0-4): ";
      cout<<"\nEnter index u want to update: ";
      cin>>indx; }
       int value;
        cout<<"Enter value u want to replace: ";
        cin>>value;
        num[indx]=value;
        for(int i=0; i<5; i++){
        cout<<num[i]<<" ";}
       return 0;
}