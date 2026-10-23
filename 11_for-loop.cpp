#include <iostream>
using namespace std;
int main(){
    //print 1 to 20
    for(int i=1;i<=20;i++){
        cout<<i<<endl;}
        cout<<"End"<<endl;
     //print 10 to 1

        for(int i=10;i>=1;i--){
        cout<<i<<endl;}
        cout<<"End"<<endl;
    
 // take input=n then print 1 to n
    int n;
    cout<<"Enter any num: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}