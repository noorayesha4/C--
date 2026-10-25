#include <iostream>
using namespace std;
//Function for calculate the total of numbers
int calculateTotal(int num1,int num2,int num3){
    return num1+num2+num3;
}
//Function for calculate the percentage of total numbers
float calculatePercentage(int Totalmarks){
    return Totalmarks/static_cast<double>(300)*100;
}

//Function for return the grade
char getgrade(float percentage){
    if(percentage<50){
        return'F';
    }
    else if(percentage>=50&&percentage<60){
        return 'D';
    }
    else if(percentage>=60&&percentage<70){
        return 'C';}
    else if(percentage>=70&&percentage<80){
        return 'B';}
    else if(percentage>=80){
        return 'A';}
       
        return'G';
}
int main(){
    int a,b,c;
    //Input objects and validations
    cout<<"Enter your marks for English: ";
    cin>>a;
    if(a<0||a>100){cout<<"Invalid Input!!"; return 0; }
    cout<<"Enter your marks for Math: ";
    cin>>b;
    if(b<0||b>100){cout<<"Invalid Input!!"; return 0; }
    cout<<"Enter your marks for Science: ";
    cin>>c;
    if(c<0||c>100){cout<<"Invalid Input!!"; return 0;}
    //output objects
    cout<<"======STUDENT RESULT======"<<endl;
    int totalmarks =calculateTotal(a,b,c);
    cout<<"Total:"<<totalmarks<<"/300"<<endl;
    float Percentage =calculatePercentage(totalmarks);
    cout<<"Percentage:"<<Percentage<<endl;
    char grade =getgrade(Percentage);
    cout<<"Grade:"<<grade<<endl;
    cout<<"=========================";
    return 0;

}