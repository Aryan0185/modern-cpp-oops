#include<iostream>
using namespace std;
class sum_of_digit{
    private:
    int sum;
    public:
    void get_data(){
        cout<<"Enter a number: "<<endl;
        cin>>sum;
    }
    void calculate_sum(){
        int digit,total=0,num;
        num=sum;
        while(num!=0){
            digit=num%10;
            total=total+digit;
            num=num/10;
        }
        cout<<"The sum of digits is: "<<total<<endl;
    }
};
int main(){
    sum_of_digit obj;
    obj.get_data();
    obj.calculate_sum();
    return 0;
}