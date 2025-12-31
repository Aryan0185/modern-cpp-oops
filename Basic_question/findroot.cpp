#include<iostream>
#include<cmath>
using namespace std;
class root{
    private :
    int a,b,c;
    float root1 ,root2;/* Quadratic equestion 
      a*x^2+b*x+c=0 a,b,c is a real number
      find a root x=(-b+sqrt(b^2-4*a*c))/2*a
                  x=(-b-sqrt(b^2-4*a*c))/2*a
    */
   public: 
   void input(){
    cout<<"Enter a value of a and b and c."<<endl;
    cin>>a>>b>>c;
   }
   /*Root of  two type Real  root& imaginary root
   Real root conditon b^2-4*a*c>=0
   imaginary root condition b^2-4*a*c<0 */
   void display(){
    if(pow(b,2)-4*a*c>=0){ cout<<"It is a Real root."<<endl;}
    else{cout<<"It is a imaginary."<<endl;}
   }
   void calculate_real_root(){
    float root1,root2;
    root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"Root 1 is : "<<root1<<endl;
    cout<<"Root 2 is : "<<root2<<endl;
   }
};
int main(){
    root r;
    r.input();
    r.display();
    r.calculate_real_root();
    return 0;
}