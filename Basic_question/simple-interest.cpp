#include<iostream>
using namespace std;
class interest{
    private :
    float P,R,T;// P :Principle amount
    // R :The interest rate per annum
    //T :The time in years
    // simple interest formula :SI=P*R*N/100
    public:
    void input(){
        cout<<"Enter a Principle amount : ";
        cin>>P;
        cout<<"Enter a interest rate per annum : ";
        cin>>R;
        cout<<"Enter a time in years : ";
        cin>>T;
    } 
    void display(){
        cout<<"Simple interest : "<<P*R*T/100;
    }
};
int main(){
    interest obj;
    obj.input();
    obj.display();
    return 0;
}