#include <iostream>
#include <string> // important for string
using namespace std;

int main(){
    // 1. used output object, escape sequences, manipulator
    cout << "hello, I am Noir\t\"be a good\"\n this is sooo" << endl;
    cout << "I want to become a good programmer\nI will" << endl;

    // 2. used int data type
    int age = 19;
    int year = 2007;
    cout << age << endl;
    cout << year << endl;

    // 3. used string, int datatypes
    string name1 = "noir";
    cout << "my name is\t" << name1 << endl;
    cout << "I born in\t" << year << endl;
    cout << "I am \t" << age << endl;

    // 4. used string data type, input object
    string name2;
    cout << "what is your name? ";
    cin >> name2;
    cout << "Hello!\t" << name2 << endl;

    // 5. used int, short, long ,char data types with 3 identifiers
    int a,b,c;
    a=2;
    b=5;
    c=2;
    cout << a+b+c << endl;
    short ali_age=4;
    cout << ali_age << endl;
    long within=9000000;
    cout << within << endl;
    char grade='A';
    cout<<grade<<endl;

        return 0; }