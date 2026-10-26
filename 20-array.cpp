#include <iostream>
using namespace std;
int sum(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += array[i];
    }
    return sum;

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