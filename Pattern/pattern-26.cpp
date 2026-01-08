#include<iostream>
using namespace std;
class pattern{
    int n;
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void display(){
        for(int i=n;i>=1;i--){
            //lower half triangle
            for(int j=n;j>=i;j--){
                cout<<"  ";
            }
            //print star
            for(int j=1;j<=2*i-1;j++){
                cout<<"* ";
            }
            //end line
            cout<<endl;
        }
         //for rows loops 
        for(int i=1;i<=n;i++){
            //free space 
            for(int j=n;j>=i;j--){
                cout<<"  ";
            }
            //print star
            for(int j=1;j<2*i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    p.getdata();
    p.display();
    return 0;
}