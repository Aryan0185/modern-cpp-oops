#include<iostream>
using namespace std;
class pattern {
    int n;
    public :
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void display(){
        //for printing the pattern
        for(int i=1;i<=n;i++){
           for (int j = 1; j <= i; j++) {
                cout << ((i + j) % 2 == 0 ? "1 " : "0 ");
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