#include<iostream>
using namespace std;
class reverse_number{
    private:
    int num;
    public:
    void getdata(){
        cout<<"Enter a number: ";
        cin>>num;
    }
    void rev(){
        int rev_num=0, temp=num;
        while(temp!=0){
            rev_num=rev_num*10 + temp%10;
            temp/=10;
        }
        cout<<"Reversed Number: "<<rev_num<<endl;
    }
};
int main(){
    reverse_number rn;
    rn.getdata();
    rn.rev();
    return 0;
}