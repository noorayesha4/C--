#include <iostream>
using namespace std;
int sum(int array[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total += array[i];
    }
    return total;

}
int main(){
    int number[5];
    for(int i=0;i<5;i++){
       cout<<"Enter any num: ";
        cin>>number[i];
    }
    for(int j=0;j<5;j++){
        cout<<number[j]<<endl;
    }
    int Sum=sum(number,5);
    cout<<"Your sum is: "<<Sum;
    return 0;
}