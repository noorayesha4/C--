#include<iostream>
int main(){
    int arr[5];
    int n=5;
    for(int i=0;i<5;i++){
         std::cout<<"Enter any number: ";
         std::cin>>arr[i];
    }
      std::cout<<"Orignal Array: ";
    for(int i=0;i<5;i++){
         std::cout<<arr[i]<<" ";
    }
     
     for(int i=0;i<n/2;i++){
         int temp=arr[i];
          arr[i]=arr[n-1-i];
          arr[n-1-i]=temp;
    }
    std::cout<<"\nReverse Array: ";
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}