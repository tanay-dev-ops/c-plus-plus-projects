     #include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a no. :";
    cin>>x;
    for(int i=1; i<=x; i++){
        for(int j=i-1; j>=1; j--){
            cout<<" ";}
            for(int k=(2*x)-(2*i-1); k>=1; k=k-1)
             {cout<<"*";}
            cout<<endl;}
}
