using namespace std;
int main(){
    int x;
    cout<<"enter no. of rows  :";
    cin>>x;
     for(int i=1; i<=x; i++) {
     for(int j=1; j<=i; j=j+1){
        if(i%2!=0)
        cout<<j;
       if(i%2==0)
      cout<<(char)(64+j);
    }
     cout<<endl;
     } 
}
