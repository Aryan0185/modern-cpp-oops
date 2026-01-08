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
      //for loop use to print a number decreasing order
      for(int j=i;j>=1;j--){
        cout<<j<<" ";
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