#include<iostream>
using namespace std;
void printReverse(int n){
    cout<<"Printing in reverse order:"<<endl;
     while(n>=1){
        cout<<n<<endl;
        n--;
    }
}
void printNumbers(int n){
    int i=1;
    cout<<"Printing in normal order:"<<endl;
      while(i<=n){
        cout<<i<<endl;
        i++;
    }
    }
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNumbers(n);
    printReverse(n);
    return 0;
}