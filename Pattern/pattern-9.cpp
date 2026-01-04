#include<iostream>
using namespace std;
class pattern{
    int n;
    public :
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void display(){
        for(int i=n;i>=1;i--){
            for(int j=i;j>=1;j--){
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