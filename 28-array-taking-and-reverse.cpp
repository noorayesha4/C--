#include<iostream>
void reverseArray(int arr[],int n){
    for(int i = 0; i < n/2; i++){
    int temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
}
}
    int main(){
    int n;
    std::cout<<"Enter the length of your array: ";
    std::cin>>n;
    while(n<=0){
        std::cout<<"Invalid input!!";
        std::cout<<"\nAgain Enter the length of array: ";
        std::cin>>n;
    }
     int arr[n];
     for(int i=0;i<n;i++){
        std::cout<<"Enter any num: ";
        std::cin>>arr[i]; }

        std::cout<<"Original Array: ";
        for(int i=0;i<n;i++){
            std::cout<<arr[i]<<" ";}
        
         reverseArray(arr,n);
          std::cout<<"\nReverse Array: ";
          for(int i=0;i<n;i++){
            std::cout<<arr[i]<<" ";}
            return 0;
}