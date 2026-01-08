#include<iostream>
using namespace std;
class largest{
    private:
    int x,y,z;
    public:
    void input(){
        cout<<"Enter a three number :";
        cin>>x>>y>>z;
    }
    void larger(){
        if(x>y && x>z){ cout<<"largest value is :"<<x<<endl;}
        else if(y>x && y>z){cout<<"largest value is :"<<y<<endl;}
        else{cout<<"largest value is :"<<z<<endl;}
    }
    void small(){
        if(x<y && x<z){ cout<<"Smallest value is :"<<x<<endl;}
        else if(y<x && y<z){cout<<"Smallest value is :"<<y<<endl;}
        else{cout<<"Smallest value is :"<<z<<endl;}
    }
};
int main(){
    largest l;
    l.input();
    l.larger();
    l.small();
    return 0;
}