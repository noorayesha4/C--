#include<iostream>
void bubbleSort(int arr[],int n){
     for(int i = 0; i < n-1; i++){
         bool swapped=false;
      for(int j = 0; j < n-1-i; j++){
         if(arr[j] > arr[j+1]){
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
         swapped=true;}} 
         if(swapped == false) {
            break;
         }}}
         int main(){
          int n;
           std::cout<<"Enter the length of your array: ";
            std::cin>>n;
            while(n<=0){
            std::cout<<"Invalid input!!";
            std::cout<<"\nAgain Enter the length of array: ";
            std::cin>>n;}
                    
            int arr[n];
        for(int i=0;i<n;i++){
            std::cout<<"Enter any num: ";
            std::cin>>arr[i]; }
            bubbleSort(arr, n);
            std::cout<<"\nSorted Array: ";
          for(int i=0;i<n;i++){
            std::cout<<arr[i]<<" ";}
      
         return 0;
        }
         

