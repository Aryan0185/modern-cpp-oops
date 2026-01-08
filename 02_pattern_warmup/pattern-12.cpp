#include<iostream>
using namespace std;
class pattern{
    int n,count=1;
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout<<count<<" ";
                count ++;
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