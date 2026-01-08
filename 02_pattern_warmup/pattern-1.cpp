#include<iostream>
using namespace std;
class pattern{
  private :  
  int n;
  public:
    void input(){
        cout<<"Enter a number ."<<endl;
        cin>>n;
    }
    void Pattern(){
        for(int i=1;i<=n;i++){
            for( int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    p.input();
    p.Pattern();
    return 0;
}