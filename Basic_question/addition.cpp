#include<iostream>
using namespace std;
class add{
    private :
    int x,y;
    public :
    void input(){
        cout<<"Enter a x and y";
        cin>>x>>y;
    }
    void display(){
        cout<<"Addition of two number : "<<x+y;
    }
};
int main(){
    add obj;
    obj.input();
    obj.display();
    return 0;
}