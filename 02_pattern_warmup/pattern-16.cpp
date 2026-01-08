#include<iostream>
using namespace std;
class pattern{
    int n;
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    // Function to display Pascal's Triangle
    void display(){
        for(int i=0;i<n;i++){
            // Printing spaces for formatting
             for(int j=n;j>i;j--){
                cout<<" ";
             }
            for(int j=0;j<=i;j++){
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
            }
            cout<<endl;
        }
    }
    // Function to calculate factorial
    long fact(int num){
        long f=1;
        int i=1;
       while(i<=num){
           f=f*i;
           i++;
       }
         return f;
    }
};
int main(){
    pattern p;
    p.getdata();
    p.display();
    return 0;
}