#include<iostream>
int main(){
    int n;
    std::cout<<"Enter length of array: ";
    std::cin>>n;
    while(n<=0){
        std::cout<<"Invalid Input!\nAgain Enter the lenght of array: ";
        std::cin>>n;
    }
    int arr[n+1];
    for(int i=0;i<n;i++){
        std::cout<<"Enter any num: ";
        std::cin>>arr[i];
    }
    std::cout<<"array: ";
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    int indx;
    int num;
    std::cout<<"\nEnter changing index: ";
    std::cin>>indx;
    while(indx<0||indx>n){
        std::cout<<"Enter changing index: ";
        std::cin>>indx;
    }
    std::cout<<"Enter changing value for "<<indx<<": ";
    std::cin>>num;
    for(int i=n;i>indx;i--){
        arr[i]=arr[i-1];
    }
    arr[indx]=num;
    std::cout<<"Updated array: ";
    for(int i=0;i<n+1;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}