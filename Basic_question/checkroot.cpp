#include<iostream>
#include<cmath>
using namespace std;
class root{
    private :
    int a,b,c;/* Quadratic equestion 
      a*x^2+b*x+c=0 a,b,c is a real number
      find a root x=(-b+sqrt(b^2-4*a*c))/2*a
                  x=(-b-sqrt(b^2-4*a*c))/2*a
    */
   public: 
   void input(){
    cout<<"Enter a value of a."<<endl;
    cin>>a;
    cout<<"Enter a value of b."<<endl;
    cin>>b;
    cout<<"Enter a value of c."<<endl;
    cin>>c;
   }
   /*Root of  two type Real  root& imaginary root
   Real root conditon b^2-4*a*c>=0
   imaginary root condition b^2-4*a*c<0 */
   void display(){
    if(pow(b,2)-4*a*c>=0){ cout<<"It is a Real root.";}
    else{cout<<"It is a imaginary.";}
   }
};
int main(){
    root r;
    r.input();
    r.display();
    return 0;
}