#include<iostream>
using namespace std;
class pyramid{
    int n;
public:
 void getdata(){
    cout<<"Enter the number of rows: ";
    cin>>n;
 }
 void display(){
    //for loop for rows
    for(int i=1;i<=n;i++){
      //for loop for spaces
      for(int j=1;j<=(n-i);j++){
        cout<<" ";
      }
      //for loop for stars
      for(int j=1;j<=i;j++){
        cout<<"* ";
      }
      //for loop for free space
      for(int j=n-1;j>=i;j--){
        cout<<" ";
      }
      //for loop for new line 
        cout<<endl;

    }
 }
};
int main(){
    pyramid p;
    p.getdata();
    p.display();
    return 0;
}