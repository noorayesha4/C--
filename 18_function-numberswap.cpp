#include <iostream> 
using namespace std;
void swapnumber(int &a , int &b){

int temp = a;
a=b;
b=temp;
cout<<a<<"\n"<<b;
}
int main(){
    int n;
    int w;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Enter any number: ";
    cin>>w;
    cout<<"first num:"<<n<<endl;
    cout<<"second num: "<<w<<endl;
    swapnumber(n,w);
    return 0;
}