#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any positive integer:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==10){
                break;
            }
        
        if(i%3==0){
            continue;
        }
        else
       {cout<<i<<endl;}
    }

    return 0;
}