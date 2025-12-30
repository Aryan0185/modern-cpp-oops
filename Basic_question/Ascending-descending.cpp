#include<iostream>
using namespace std;
class order{
    private :
    int x,y,z;
    public:
    void input(){
        cout<<"Enter a three number.";
        cin>>x>>y>>z;
    }
    void decending(){
        if(x>=y && x>=z){
        if(y>=z){cout<<"Descending order :"<<x<<" "<<y<<" "<<z<<endl;}
          else{cout<<"Descending order :"<<x<<" "<<z<<" "<<y<<endl;}  }
        else if(y>=x && y>=z){if(x>=z){cout<<"Descending order :"<<y<<" "<<x<<" "<<z<<endl;}
          else{cout<<"Descending order :"<<y<<" "<<z<<" "<<x<<endl;}}
    else{
        if(x>=y){cout<<"Descending order:"<<z<<" "<<x<<" "<<y<<endl;}
      else{cout<<"Descending order:"<<z<<" "<<y<<" "<<x<<endl;}}}
void ascending(){
        if(x<=y && x<=z){
        if(y<=z){cout<<"Ascending order :"<<x<<" "<<y<<" "<<z<<endl;}
          else{cout<<"Ascending order :"<<x<<" "<<z<<" "<<y<<endl;}  }
        else if(y<=x && y<=z){if(x<=z){cout<<"Ascending order :"<<y<<" "<<x<<" "<<z<<endl;}
          else{cout<<"Ascending order :"<<y<<" "<<z<<" "<<x<<endl;}}
    else{if(x<=y){cout<<"Ascending order:"<<z<<" "<<x<<" "<<y<<endl;}
      else{cout<<"Ascending order:"<<z<<" "<<y<<" "<<x<<endl;}}
}};
int main(){
    order o;
    o.input();
    o.decending();
    o.ascending();
    return 0;
}