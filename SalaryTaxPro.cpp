#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter your salary :";
    cin>>x;
    if(x>50000){
        if(x<100000)
        {cout<<"you have to pay tax of 10 percent tax of your income"<<endl;
        cout<<"income after tax deduction :";
        cout<<x-(x*0.1);}
        else
         {cout<<"you have to pay tax of 20 percent tax of your salary"<<endl;
          cout<<"income after tax deductio :";
        cout<<x-(x*0.2);}
         }
        else
        {cout<<"no tax you have to pay"<<endl;
            cout<<"income:";
            cout<<x;}
    }
