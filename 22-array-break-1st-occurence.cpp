#include<iostream>
using namespace std;
int main(){
    int target[5];
    for(int i=0;i<5;i++){
        cout<<"Enter any number: ";
        cin>>target[i];}
        int num;
        cout<<"Enter a  number to find: ";
        cin>>num;
        bool found=false;
        for(int i=0;i<5;i++){
            if(num==target[i]){
                found=true;
             cout<<"1st occurence at index: "<<i<<endl;
              break;
            }} 
            if(found==true){
                cout<<"Number found "<<endl;
            }
            else{
                cout<<"Number not found "<<endl;
            }
                
     return 0;
}