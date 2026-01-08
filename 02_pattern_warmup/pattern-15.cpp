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
        //for rows loops 
        for(int i=1;i<=n;i++){
            //free space 
            for(int j=n-1;j>=i;j--){
                cout<<" ";
            }
            int num=i;
            //print number 
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num++;
            }
            //print number 
            num-=2;
            for(int j=i;j>1;j--){
                cout<<num<<" ";
                num--;
            }
            //end line
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