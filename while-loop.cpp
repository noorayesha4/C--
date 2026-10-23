#include <iostream>
using namespace std;
int main(){
    //will print n to 1
    int a;
    cout<<"Enter any number:";
    cin>>a;
    int i=a;
    while(i>=1){
        cout<<i<<endl;
     i--;
    }
    //will print 1 to n
    int n;
    cout<<"Enter any integer: ";
    cin>>n;
    int j=1;
    while(j<=n){
        cout<<j<<endl;
        j++;}
    return 0;

}