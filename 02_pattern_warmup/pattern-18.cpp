#include<iostream>
using namespace std;
class pattern{
    int n;
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void display(){
        //for rows loops 
        for(int i=1;i<=n;i++){
            //free space 
            for(int j=n-1;j>=i;j--){
                cout<<"  ";
            }
            //for number printing increasing order
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            //for number printing decreasing order
            for(int j=i-1;j>=1;j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }  
    }
};
int main(){
    pattern p;
    p.getdata();
    p.display();
    return 0;
}