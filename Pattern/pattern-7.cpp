#include<iostream>
using namespace std;
class pattern{
    int n;
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void dispaly(){
        //for rows loop
        for(int i=1;i<=n;i++){
            //for columns loop to print numbers
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            //for columnsloop to print numbers is start to i=2
          for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
          }  
          //for new line
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    p.getdata();
    p.dispaly();
    return 0;
}