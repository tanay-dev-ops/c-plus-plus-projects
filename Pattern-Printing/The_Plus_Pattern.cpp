#include<iostream>
using namespace std;
int main(){
    cout<<"note:no. should be odd ";
    int x;
    cout<<"enter no.   :";
    cin>>x;
     for(int i=1; i<=x; i++) {
     for(int j=1; j<=x; j++){
        if( (x+1)/2==j or i==(x+1)/2)
        cout<<" *";
        else
        cout<<"  ";}          
     cout<<endl;

  } 
}
