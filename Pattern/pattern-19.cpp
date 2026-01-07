#include<iostream>
using namespace std;
class pattern{
    int n,a=1;
    char ch='A';
    public:
    void getdata(){
        cout<<"Enter the number of rows: ";
        cin>>n;
    }
    void display(){
        // for rows
        for(int i=1;i<=n;i++){
            //for free spaces
           for(int j=n-1;j>=i;j--){
                cout<<" ";
            }
            //for number and Alphabets
            for(int j=1;j<=i;j++){
                //for even position print character
                if(i%2==0){
                    cout<<ch<<" ";
                    ch++;
                }
                //for odd position print number
                else{
                    cout<<a<<" ";
                    a++;
                }
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