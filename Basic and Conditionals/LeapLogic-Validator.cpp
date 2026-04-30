 #include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter your year : ";
   cin>>x;
   if( x%100!=0 && x%4==0 or x%100==0 && x%400==0)
   cout<<"year is a leap year";
   else
   cout<<"year is non leap year";
    }
