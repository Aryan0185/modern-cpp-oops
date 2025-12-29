#include<iostream>
using namespace std;
class whether{
    private:
    int x;
    public:
    void input(){
        cout<<"Enter a number :";
        cin>>x;
    }
    void check(){
        if(x>0){cout<<"Positive value :"<<x<<endl;}
        else if(x<0 ){cout<<"Negative value :"<<x<<endl;}
        else{cout<<"Zero"<<x<<endl;}
    }
};
int main(){
    whether w;
    w.input();
    w.check();
    return 0;
}