#include<iostream>
using namespace std;
int main(){
    int num[5];
    int lastindex=-1;
    int target;
    for(int i=0;i<5;i++){
        cout<<"Enter any num: ";
        cin>>num[i];}
        cout<<"Enter num to find: ";
        cin>>target;
        for(int i=0;i<5;i++){
            if(target==num[i]){
                lastindex=i;
            }
        }
      if(lastindex!=-1){
        cout<<"last occurence found at index: "<<lastindex;
      }
      else{
        cout<<"Number not found!";
      }
      return 0;
}