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
                // Calculating binomial coefficient
                int coeff=1;
                for(int k=0;k<j;k++){
                    coeff=coeff*(i-k);
                    coeff=coeff/(k+1);
                }
                cout<<coeff<<" ";
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