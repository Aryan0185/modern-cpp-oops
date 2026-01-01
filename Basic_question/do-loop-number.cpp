#include<iostream>
using namespace std;
void numberPattern(int n) {
    int i=1;
    cout<<"number printing:"<<endl;
    do{
        cout<<i<<" "<<endl;
        i++;
    }while(i<=n);
    cout<<endl;
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    numberPattern(n);
    return 0;
}