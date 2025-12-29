#include<iostream>
#include<cmath>//it is use to math library for use of power 
using namespace std;
class area{
    private:
    int n;//n: Is a variable of number
    /* formula of square area =n*n
       formula of cube area = n*n*n */
    public:
    void input(){
        cout<<"Enter a number .";
        cin>>n;
    }
    void display(){
      cout<<"Area of square :"<<pow(n,2)<<endl;
      /*It is a representation of power :pow(number ,power)*/
      cout<<"Area of cube :"<<pow(n,3);
    }
};
int main(){
    area obj ;
    obj.input();
    obj.display();
    return 0;
}