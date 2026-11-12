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
        int count=0;
        for(int i=0;i<5;i++){
            if(num==target[i]){
                found=true;
              count++;
            }} 
            if(found==true){
                cout<<"Number found "<<endl;
            }
            else{
                cout<<"Number not found "<<endl;
            }
        
            cout<<"Number occurs "<<count<<" times"<<endl;
                
     return 0;
} 