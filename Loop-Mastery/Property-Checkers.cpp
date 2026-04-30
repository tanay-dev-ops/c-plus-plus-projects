#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"enter a no. :";
  cin>>x;
  int y=0;
  for(int i=1; i<x; i++)
  {if(x%i==0)
  y=y+i;}
  if(y==x)
  cout<<"it is perfect no.";
  else
  cout<<"it is not a perfect no.";

}
