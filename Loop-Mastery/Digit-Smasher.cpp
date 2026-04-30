#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"enter a no. :";
  cin>>x;
  int y=1;
  int i=x;
  while(i>0)
  {if(i%10!=0)
  {y=y*(i%10);
  i=i/10;}
  else
    {i=i/10; }   }
    cout<<"( note : zero should not involved in multiplication if it is present in no. )"<<endl;
  cout<<"multiplication  of all digit of ) "<<x<<" :";
  cout<<y;
}
