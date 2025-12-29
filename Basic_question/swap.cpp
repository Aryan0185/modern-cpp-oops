#include<iostream>
using namespace std;
class Swap{
    private :
    int x,y;/* x & y is a variable .It is a 
    change the value of x & y */
    public:
    void input(){
        cout<<"Enter a first number.";
        cin>>x;
        cout<<"Enter a second number.";
        cin>>y;
    }
    void display(){
        cout<<"First number : "<<x<<endl;
        cout<<"Second number : "<<y;
    }
    void swap(){
        int temp;
        temp=x;
        x=y;
        y=temp;
    }
};
int main(){
    Swap s;
    s.input();
    s.swap();
    s.display();
    return 0;
}