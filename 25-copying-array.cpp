#include<iostream>
using namespace std;
int main(){
    int num[5];
    int copy[5];
    for(int i=0;i<5;i++){
        cout<<"Enter any number: ";
        cin>>num[i];}
        for(int i=0;i<5;i++){
            copy[i]=num[i];
        }
        cout<<"Orignal array: ";
        for(int i=0;i<5;i++){
            cout<<num[i]<<" ";
        }
        cout<<endl;
        cout<<"Copied array: ";
        for(int i=0;i<5;i++){
            cout<<copy[i]<<" ";
        }
       return 0; 
}