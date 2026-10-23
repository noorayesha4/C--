#include <iostream>
using namespace std;
int main(){
    int choice;
    do{
        cout << "\n===== MENU =====" << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Say Welcome" << endl;
    cout << "3. Exit" << endl;
    cout<<"Enter your choice 1to3: ";
    cin>>choice;
    if(choice==1){cout<<"Hello!"<<endl;}
    else if (choice==2){cout<<"Welcome"<<endl;}
    else if(choice==3){cout<<"Exit"<<endl;}
    else{cout<<"Invalid input.";}
    }while(choice!=3);
    return 0;
}