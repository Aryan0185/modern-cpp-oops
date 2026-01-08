#include<iostream>
using namespace std;
class area{
    private:
    int r,ar;//r : Is a variable of radius
    /* formula of circle area = pi*radius*radius */
    public:
    void input(){
        cout<<"Enter a radius .";
        cin>>r;
    }
    void display(){
      cout<<"Area of circle :"<<3.14*r*r;
    }
};
int main(){
    area obj ;
    obj.input();
    obj.display();
    return 0;
}