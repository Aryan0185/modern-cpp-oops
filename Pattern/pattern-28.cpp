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
        //outer loop
        for(int i=1;i<=n;i++){
            //spaces
            for(int j=1;j<i;j++){
            cout<<"  ";
        }
        //stars
            for(int j=1;j<2*(n-i+1);j++){
                cout<<"* ";
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