#include<iostream>
using namespace std;
int main(){
     int x;
     cout<<"enter a no. :";
     cin>>x;
     cout<<"gp to "<<x<<"th term : ";
    int a=1;
     for(int i=1; i<=x; i=i+1)
    { cout<<a<<" ";
     a=a*2;
     }
    }  
