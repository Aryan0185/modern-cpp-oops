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
        //for raws
        for(int i=1;i<=n;i++){
            // for number of columns
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            //for free space 
            for(int j=2*n-2*i;j>=1;j--){
                cout<<"* ";
            }
            //for number of columns
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
            }
            //for new line
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