#include<iostream>
using namespace std;
class pattern{
    int n;
    char alpha='A';
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void dispaly(){
        //for rows loop
        for(int i=1;i<=n;i++){
            //for columns loop
            for(int j=1;j<=i;j++){
                cout<<alpha<<" ";
                alpha++;
            }
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