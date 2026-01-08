#include<iostream>
using namespace std;
class pattern{
    public:
    void display(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==1|| j==n || i==1 || i==n){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
};
int main(){
    pattern p;
    int n;
    cout<<"Enter the size of the pattern: ";
    cin>>n;
    p.display(n);
    return 0;
}