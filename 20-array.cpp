#include <iostream>
using namespace std;
//function to find sum 
int sum(int array[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total += array[i];
    }
    return total;

}
  //function to find avg
 double avg(int Sum,int size){
    double average;
    average=static_cast<double>(Sum)/size;
    return average;
  }
//function to find largest number 
int largnum(int array[],int size){
    int max=array[0];
    for(int i=0;i<size;i++){
    if(array[i]>max){
        max=array[i];

    }}return max;
}
//function to find smallest number 
int smallnum(int array[],int size){
    int min=array[0];
    for(int i=0;i<size;i++){
        if(array[i]<min){
        min=array[i];}
    }return min;
}
//starting of execution
int main(){
    int number[5];
    //loop for taking input
    for(int i=0;i<5;i++){
       cout<<"Enter any num: ";
        cin>>number[i];
    }
    //loop for printing the input
    for(int j=0;j<5;j++){
        cout<<number[j]<<endl;
    }
    //print of sum 
    int Sum=sum(number,5);
    cout<<"Your sum is: "<<Sum<<endl;
    //print of largest number 
    int larg=largnum(number,5);
    cout<<"Your largest number is: "<<larg<<endl;
    //print of small number
    int small=smallnum(number,5);
    cout<<"Your smallest number is: "<<small<<endl;
    //print of avg
    double avgs=avg(Sum,5);
    cout<<"Your avg is: "<<avgs;
    return 0;
}