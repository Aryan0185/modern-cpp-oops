#include<iostream>
using namespace std;
void even(int n){
    int i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" "<<endl;
        }
        i++;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Even numbers from 1 to "<<n<<" are: ";
    even(n);
    return 0;
}